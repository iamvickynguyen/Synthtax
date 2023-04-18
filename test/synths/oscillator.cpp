// g++ oscillator.cpp -lsndfile

#include "../../include/synths/builtin.hpp"
using namespace synths;

int main() {
	Oscillator osc("sine", 440.0, 1.0);
	osc.write_to_file("sine440.wav", 2.0);
	
	osc.write_to_file("defaultDuration.wav");

	std::shared_ptr<Oscillator> s1 = std::make_shared<Oscillator>("sine", 440.0, 1.0, 1.0)  ;
	std::shared_ptr<Oscillator> s2 = std::make_shared<Oscillator>("sine", 220.0, 0.8, 1.5)  ;
	std::shared_ptr<Oscillator> s3 = s1 + s2;
	s3->write_to_file("binaryOp.wav");

	return 0;
}
