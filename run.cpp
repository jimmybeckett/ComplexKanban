#include <iostream>
#include <cassert>
#include "trig_functions.h"
#include "other_functions.h"

int main(int argc, char** argv) {
	std::cout << "Running unit tests..." << std::endl;
	//arithmetic tests
	assert(acp::complex(5, 2) + acp::complex(2, -5) == acp::complex(7, -3));
	assert(acp::complex(3, 2) - acp::complex(1, 1) == acp::complex(2, 1));
	assert(acp::complex(-3, 2) * acp::complex(1, 4) == acp::complex(-11, -10));
	assert(acp::complex(-7, 2) / acp::complex(-9, 5) - acp::complex(0.6886792, 0.1603773) < acp::complex(.001, .001));
	std::cout << "Arithmetic tests passed!" << std::endl;
	//trig tests
	assert((acp::cos(acp::complex(3, -4)) - acp::complex(-27.0349456, 3.85115333)) < acp::complex(.001, .001));
	assert((acp::sin(acp::complex(12, -5)) - acp::complex(-39.819, -62.6167)) < acp::complex(.001, .001));
	assert(acp::tan(acp::complex(-4, 3)) - acp::complex(-0.0049082, 1.0007095) < acp::complex(.001, .001));
	std::cout << "Trig tests passed!" << std::endl;

	return 0;
}