#include "..\..\unit_tests.h"
#include "..\..\exp_functions.h"

namespace acp {
	void exp_test() {
		std::cout << "Running exp tests..." << std::endl;
		assert(in_range(exp(complex(-2, 1)), complex(0.0731219, 0.1138807), complex_error));
		assert(in_range(exp(complex(-5, -3)), complex(-0.0066705, -0.0009508), complex_error));
		assert(in_range(exp(complex(.3, 2)), complex(-0.5617394, 1.2274231), complex_error));
		std::cout << "Exp tests passed!" << std::endl;
	}
}
