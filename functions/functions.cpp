#include<iostream>
#ifndef M_PI
    #define M_PI 3.14159265358979323846
#endif
#include <chrono>
#include "portaudio.h"
#include <cmath>
using namespace std;
#define samplerate (44100)
#define framesperbuffer (64)





float* Osc(int ms, string wavetype, double frequency, double amplitude){
    // frequency of the ? wave in Hz defined
    // amplitude of the ? wave defined
    // ? wave defined
    int numseconds=ms;
    int numsamples=((int)(numseconds * samplerate));
    float phase = 0.0; // initial phase of the ? wave
    int i;
    float buffer[numsamples];
    // generate the sine, square, sawtooth, triangle waves
    if(wavetype=="sine"){
        for (i = 0; i < numsamples; i++) {
            buffer[i] = amplitude * sin(2 * M_PI * frequency * i / samplerate + phase);
        }
    }
    if(wavetype=="square"){
        float period = samplerate / frequency;
        float half_period = period / 2;
        for (i = 0; i < numsamples; i++) {
            buffer[i] = (i % (int)period < (int)half_period) ? amplitude : -amplitude;
        }
    }
    if(wavetype=="sawtooth"){
        float period = samplerate / frequency;
        float slope = 2 * amplitude / period;
        for (i = 0; i < numsamples; i++) {
            float x = fmod(i, period);
            buffer[i] = slope * x - amplitude;
        }
    }
    if(wavetype=="triangle"){
        float period = samplerate / frequency;
        float half_period = period / 2;
        float slope = amplitude / half_period;
        for (i = 0; i < numsamples; i++) {
            float x = fmod(i, period);
            if (x < half_period) {
                buffer[i] = slope * x;
            } else {
                buffer[i] = amplitude - slope * (x - half_period);
            }
        }
    }
    return buffer;
}
int play(float* wave){
    PaError err;
    PaStream *stream;
    float* buffer=wave;

    // initialize PortAudio
    err = Pa_Initialize();
    if (err != paNoError) {
        cerr << "Error: Unable to initialize PortAudio: " << Pa_GetErrorText(err) << endl;
        return 1;
    }

 
    // open the audio stream
    err = Pa_OpenDefaultStream(&stream, 0, 1, paFloat32, samplerate, framesperbuffer, 0, 0);
    if (err != paNoError) {
        cerr << "Error: Unable to open audio stream: " << Pa_GetErrorText(err) << endl;
        Pa_Terminate();
        return 1;
    }

    // start the audio stream
    err = Pa_StartStream(stream);
    if (err != paNoError) {
        cerr << "Error: Unable to start audio stream: " << Pa_GetErrorText(err) << endl;
        Pa_CloseStream(stream);
        Pa_Terminate();
        return 1;
    }

    // play the ? wave for ? ms
    err = Pa_WriteStream(stream, buffer, numsamples);
    if (err != paNoError) {
        cerr << "Error: Unable to play audio: " << Pa_GetErrorText(err) << endl;
        Pa_StopStream(stream);
        Pa_CloseStream(stream);
        Pa_Terminate();
        return 1;
    }

    // stop and close the audio stream
    err = Pa_StopStream(stream);
    if (err != paNoError) {
        cerr << "Error: Unable to stop audio stream: " << Pa_GetErrorText(err) << endl;
    }
    err = Pa_CloseStream(stream);
    if (err != paNoError) {
        cerr << "Error: Unable to close audio stream: " << Pa_GetErrorText(err) << endl;
    }

    // terminate PortAudio
    err = Pa_Terminate();
    if (err != paNoError) {
        cerr << "Error: Unable to terminate PortAudio: " << Pa_GetErrorText(err) << endl;
        return 1;
    }
}

double* ADSR(double start, double attack, double attacktime, double decay, double decaytime, double sustain, double sustaintime, double release, double releasetime){
    double returned[9];
    returned[ 0 ]=  start;
    returned[ 1 ]=  attack;
    returned[ 2 ]=  attacktime;
    returned[ 3 ]=  decay;
    returned[ 4 ]=  decaytime;
    returned[ 5 ]=  sustain;
    returned[ 6 ]=  sustaintime;
    returned[ 7 ]=  release;
    returned[ 8 ]=  releasetime;
    return returned;
}

float* apply(double* adsr, float* wave){
    double start = adsr[ 0 ];
    double attack = adsr[ 1 ];
    double attacktime= adsr[ 2 ];
    double decay= adsr[ 3 ];
    double decaytime= adsr[ 4 ];
    double sustain= adsr[ 5 ];
    double sustaintime= adsr[ 6 ];
    double release= adsr[ 7 ];
    double releasetime= adsr[ 8 ];
    
}