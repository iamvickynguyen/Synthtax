# pragma once

#include <math.h>
#include "Oscillator.hpp"

namespace synths {
class ADSR {
	public:
		ADSR(): decay_time_(-1.0f), sustain_time_(-1.0f), release_time_(-1.0f), sustain_level_(-1.0f) {}
	
		ADSR(const float decay_time, const float sustain_time,
				const float release_time, const float sustain_level=0.8):
			decay_time_(decay_time), sustain_time_(sustain_time),
			release_time_(release_time), sustain_level_(sustain_level) {}

		~ADSR() = default;

		Oscillator apply(const Oscillator &osc) {
			const std::vector<float> sound = osc.sound;
			const int N = sound.size();

			int attack_index = 0, decay_index, sustain_index, release_index;

			if (attack_time_ < 0) {
				decay_index = ceil(ATTACK_PERCENT * N) + 1;
				sustain_index = ceil(DECAY_PERCENT * N) + decay_index + 1;
				release_index = ceil(SUSTAIN_PERCENT * N) + sustain_index + 1;
			} else {
				const int srate = Oscillator::SAMPLE_RATE;
				decay_index = ceil(decay_time_ * srate) + 1;
				sustain_index = ceil(sustain_time_ * srate) + 1;
				release_index = ceil(release_time_ * srate) + 1;
			}	

			// apply ADSR to the oscillator
			std::vector<float> result;
			result.reserve(N);
			
			float attack_step = 1.0 / decay_index;
			float decay_step = (1.0 - sustain_level_) / (sustain_index - decay_index);
			float release_step = (sustain_level_ + 0.0) / (N - release_index);

			for (int i = 0; i < N; ++i) {
				if (i < decay_index) result.push_back(sound[i] * attack_step * i);
				else if (i < sustain_index) result.push_back(sound[i] * (1 - decay_step * (i - decay_index)));
				else if (i < release_index) result.push_back(sound[i] * sustain_level_);
				else result.push_back(sound[i] * (1 - release_step * (i - release_index)));
			}

			return Oscillator(osc.type, osc.frequency, osc.amplitude, osc.duration, result);
		}

		std::shared_ptr<Oscillator> apply_with_ptr(std::shared_ptr<Oscillator> &osc) {
			Oscillator result = apply(*osc);
			return std::make_shared<Oscillator>(result);
		}

	private:
		static constexpr float ATTACK_PERCENT = 0.2;
		static constexpr float DECAY_PERCENT = 0.1; 
		static constexpr float SUSTAIN_PERCENT = 0.5;
		static constexpr float RELEASE_PERCENT = 0.2;

		float attack_time_ = 0.0f;
		float decay_time_, sustain_time_, release_time_;
		float sustain_level_;
};
}
