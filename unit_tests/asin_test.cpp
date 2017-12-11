#include "../unit_tests.h"

namespace acp {
	void asin_test() {
		std::cout << "Running asin tests..." << std::endl;
		assert(in_range(asin(complex(3, 4)), complex(0.6339838, 2.3055090), complex_error));
		assert(in_range(asin(complex(-2, -1)), complex(-1.0634400, -1.4693517), complex_error));
		assert(in_range(asin(complex(-3.76, 2.22)), complex(-1.0257478, 2.1609121), complex_error));
		std::cout << "Asin tests passed!" << std::endl;
	}
}