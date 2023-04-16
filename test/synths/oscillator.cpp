// g++ oscillator.cpp -lsndfile

#include "../../include/synths/builtin.hpp"
using namespace synths;

int main() {
	Oscillator osc("sine", 440.0, 1.0);
	osc.write_to_file("sine440.wav", 2.0);
	
	osc.write_to_file("defaultDuration.wav");

	AdditiveOscillator s1("sine", 440.0, 1.0, 1.0);
	AdditiveOscillator s2("sine", 220.0, 0.8, 1.5);
	s1 += s2;
	s1.write_to_file("add.wav");

	AdditiveOscillator s3 = s2 + s2;
	s3.write_to_file("binaryOp.wav");

	return 0;
}
