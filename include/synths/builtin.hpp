#pragma once

#include <cmath>
#include <iostream>
#include <memory>
#include <sndfile.h>
#include <string>
#include <vector>

namespace synths {
class Oscillator {
public:
  static constexpr double PI = 3.14159265358979323846;
  static constexpr int SAMPLE_RATE = 44100;
  double frequency;
  double amplitude;
  double duration;
  std::string type;
  std::vector<double> sound;

  Oscillator(const std::string type, const double freq, const double amp)
      : type(type), frequency(freq), amplitude(amp), duration(0) {}

  Oscillator(const std::string type, const double freq, const double amp,
             const double duration)
      : type(type), frequency(freq), amplitude(amp), duration(duration) {
    sound = generate(duration);
  }

  Oscillator(const std::string type, const double freq, const double amp,
             const double duration, const std::vector<double> &snd)
      : type(type), frequency(freq), amplitude(amp), duration(duration) {
    sound = std::move(snd);
  }

  ~Oscillator() = default;

  Oscillator operator+(const Oscillator &other) const {
    double new_duration = std::max(duration, other.duration);
    double new_frequency = frequency + other.frequency;
    double new_amplitude = std::max(amplitude, other.amplitude);
    std::string new_type = type;

    std::vector<double> result;
    result.reserve(new_duration * SAMPLE_RATE);

    int N = std::min(sound.size(), other.sound.size());

    for (int i = 0; i < N; i++) {
      result.push_back(sound[i] + other.sound[i]);
    }

    while (N < sound.size()) {
      result.push_back(sound[N]);
      ++N;
    }

    while (N < other.sound.size()) {
      result.push_back(other.sound[N]);
      ++N;
    }

    return Oscillator(new_type, new_frequency, new_amplitude, new_duration,
                      result);
  }

  Oscillator &operator+=(const Oscillator &other) {
    *this = *this + other;
    return *this;
  }

  void write_to_file(const char *filename, const double dur = 1.0) {
    std::vector<double> samples;

    if (sound.size() == 0)
      samples = generate(dur);
    else
      samples = sound;

    SF_INFO info;
    info.channels = 1;
    info.samplerate = 44100;
    info.format = SF_FORMAT_WAV | SF_FORMAT_PCM_16;

    SNDFILE *file = sf_open(filename, SFM_WRITE, &info);
    sf_write_double(file, &samples[0], samples.size());
    sf_close(file);

    std::cout << "Wrote " << samples.size() << " samples to " << filename
              << '\n';
  }

  // duration in seconds
  std::vector<double> generate(const double duration) {
    int num_samples = SAMPLE_RATE * duration;
    std::vector<double> samples;
    samples.reserve(num_samples);

    double period = 1.0 / frequency;

    for (int i = 0; i < num_samples; ++i) {
      double t = (i + 0.0) / SAMPLE_RATE;
      double x = 0.0;

      if (type == "sine") {
        x = amplitude * std::sin(2.0 * PI * frequency * t);
      } else if (type == "triangle") {
        x = amplitude *
            (2.0 * std::abs(2.0 *
                            (t * frequency - std::floor(t * frequency + 0.5))) -
             1.0);
      } else if (type == "sawtooth") {
        x = amplitude * (2.0 / period) * (t - floor(t / period) * period) - 1.0;
      } else {
        std::cerr << "Invalid wave\n";
      }

      samples.push_back(x);
    }

    return samples;
  }
};

std::shared_ptr<Oscillator> operator+(const std::shared_ptr<Oscillator> &left,
                                      std::shared_ptr<Oscillator> &right) {
  Oscillator newOsc = (*left) + (*right);
  return std::make_shared<Oscillator>(newOsc);
}
} // namespace synths
