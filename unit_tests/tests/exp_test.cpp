#ifndef EXP_TEST_HEADER
#define EXP_TEST_HEADER
#include "..\..\unit_tests.h"
#include "..\..\exp_functions.h"

namespace acp {
	void exp_test() {
		std::cout << "Running exp tests..." << std::endl;
		assert(abs(exp(complex(-2, 1)) - complex(0.0731219, 0.1138807)) < complex_error);
		assert(abs(exp(complex(-5, -3)) - complex(-0.0066705, -0.0009508)) < complex_error);
		assert(abs(exp(complex(.3, 2)) - complex(-0.5617394, 1.2274231)) < complex_error);
		std::cout << "Exp tests passed!" << std::endl;
	}
}

#endif