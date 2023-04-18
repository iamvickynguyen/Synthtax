#include "../../include/synths/builtin.hpp"
using namespace synths;

int main() {
	Oscillator s1 = Oscillator("sine", 440.0, 1.0, 7.5);
	ADSR env;
	Oscillator envOsc = env.apply(s1);
	envOsc.write_to_file("defaultEnv.wav");

	ADSR env1(1.0, 2.5, 5.0);
	Oscillator envOsc1 = env.apply(s1);
	envOsc1.write_to_file("customEnv.wav");

	ADSR env2(3.0, 5.5, 6.0, 0.7);
	Oscillator envOsc2 = env.apply(s1);
	envOsc2.write_to_file("levelEnv.wav");
	
	std::shared_ptr<Oscillator> s_ptr = std::make_shared<Oscillator>("sine", 440.0, 1.0, 7.5);
	std::shared_ptr<ADSR> env_ptr = std::make_shared<ADSR>(2.0, 3.5, 6.0, 0.8);
	std::shared_ptr<Oscillator> envOsc_ptr = env_ptr->apply_with_ptr(s_ptr);
	envOsc_ptr->write_to_file("envPtr.wav");

	return 0;
}
