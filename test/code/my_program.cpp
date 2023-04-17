#include <iostream>
#include <cmath>
#include <rt/RtAudio.h>
#include <thread>

#define PI 3.14159265358979323846

// This function will be called by RtAudio to fill the buffer with audio samples
int audioCallback(void *outputBuffer, void *inputBuffer, unsigned int nBufferFrames,
                  double streamTime, RtAudioStreamStatus status, void *userData)
{
    double *buffer = static_cast<double *>(outputBuffer);
    double frequency = 440.0; // A4 note
    double phase = 0.0;
    double sampleRate = 48000.0;

    for (int i = 0; i < nBufferFrames; i++) {
        double sample = sin(2 * PI * frequency * phase / sampleRate);
        buffer[i] = sample;
        phase += 1.0;
    }

    return 0;
}

int main()
{
    RtAudio audio;
    if (audio.getDeviceCount() < 1) {
        std::cout << "No audio devices found!" << std::endl;
        return 1;
    }

    RtAudio::StreamParameters parameters;
    parameters.deviceId = audio.getDefaultOutputDevice();
    parameters.nChannels = 1;
    parameters.firstChannel = 0;

    unsigned int bufferFrames = 256;
    double data[bufferFrames];

    // Initialize RtAudio stream
    try {
        audio.openStream(NULL, &parameters, RTAUDIO_FLOAT64, 48000, &bufferFrames, &audioCallback);
        audio.startStream();
        std::cout << "Playing..." << std::endl;
        while (audio.isStreamRunning()) {
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
        }
        audio.stopStream();
    }
    catch (RtAudioError& e) {
        e.printMessage();
        return 1;
    }

    return 0;
}

