#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>

int main()
{
    // Set up the wave file parameters
    const int sampleRate = 44100;
    const int bitsPerSample = 16;
    const int numChannels = 1;
    const int numSamples = sampleRate;  // 1 second

    // Calculate the maximum amplitude for the given bit depth
    const int maxAmplitude = (1 << (bitsPerSample - 1)) - 1;

    // Create a buffer to hold the audio data
    std::vector<short> buffer(numSamples);

    // Fill the buffer with a sine wave
    const double frequency = 440.0;  // 440 Hz
    const double amplitude = 0.5;

    for (int i = 0; i < numSamples; i++)
    {
        double sample = amplitude * maxAmplitude * std::sin(2.0 * M_PI * frequency * i / sampleRate);
        buffer[i] = static_cast<short>(sample);
    }

    // Write the wave file
    std::ofstream outFile("output.wav", std::ios::binary);

    // Write the RIFF header
    outFile.write("RIFF", 4);
    outFile.write(reinterpret_cast<const char*>(&numChannels), 2);
    outFile.write(reinterpret_cast<const char*>(&numSamples), 4);
    outFile.write("WAVE", 4);

    // Write the format chunk
    const int byteRate = sampleRate * numChannels * bitsPerSample / 8;
    const short blockAlign = numChannels * bitsPerSample / 8;

    outFile.write("fmt ", 4);
    outFile.write(reinterpret_cast<const char*>(&(bitsPerSample)), 2);
    outFile.write(reinterpret_cast<const char*>(&numChannels), 2);
    outFile.write(reinterpret_cast<const char*>(&sampleRate), 4);
    outFile.write(reinterpret_cast<const char*>(&byteRate), 4);
    outFile.write(reinterpret_cast<const char*>(&blockAlign), 2);

    // Write the data chunk
    outFile.write("data", 4);
    outFile.write(reinterpret_cast<const char*>(&numSamples), 4);
    outFile.write(reinterpret_cast<const char*>(buffer.data()), numSamples * sizeof(short));

    outFile.close();

    std::cout << "Wrote " << numSamples << " samples to output.wav" << std::endl;

    return 0;
}

