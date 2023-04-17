#include <iostream>
#include <cmath>
#include <sndfile.h>
#include <vector>

int main()
{
    // Set up the wave file parameters
    const int sampleRate = 44100;
    const int numSamples = sampleRate;  // 1 second

    // Calculate the maximum amplitude for a float sample
    const float maxAmplitude = 1.0f;

    // Create a buffer to hold the audio data
    std::vector<float> buffer(numSamples);

    // Fill the buffer with a sine wave
    const double frequency = 440.0;  // 440 Hz
    const double amplitude = 0.5;

    for (int i = 0; i < numSamples; i++)
    {
        float sample = static_cast<float>(amplitude * maxAmplitude * std::sin(2.0 * M_PI * frequency * i / sampleRate));
        buffer[i] = sample;
    }

    // Write the wave file
    const char* filename = "output.wav";
    SF_INFO fileInfo;
    fileInfo.samplerate = sampleRate;
    fileInfo.channels = 1;
    fileInfo.format = SF_FORMAT_WAV | SF_FORMAT_FLOAT;
    SNDFILE* file = sf_open(filename, SFM_WRITE, &fileInfo);

    if (!file)
    {
        std::cerr << "Error opening file: " << sf_strerror(file) << std::endl;
        return 1;
    }

    sf_write_float(file, buffer.data(), numSamples);

    sf_close(file);

    std::cout << "Wrote " << numSamples << " samples to " << filename << std::endl;

    return 0;
}

