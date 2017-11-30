#ifndef TAN_TEST_HEADER
#define TAN_TEST_HEADER
#include "..\..\unit_tests.h"
#include "..\..\trig_functions.h"

namespace acp {
	void tan_test() {
		std::cout << "Running tan tests..." << std::endl;
		assert(abs(acp::tan(complex(-4, 3)) - complex(-0.0049082, 1.0007095)) < complex_error);
		assert(abs(acp::tan(complex(-7, -4)) - complex(-0.0006645, -0.9999080)) < complex_error);
		assert(abs(acp::tan(complex(6, 1)) - complex(-0.1164930, 0.7874123)) < complex_error);
		std::cout << "Tan tests passed!" << std::endl;
	}
}

#endif