#include "../unit_tests.h"

namespace acp {
	void sinh_test() {
		std::cout << "Running sinh tests..." << std::endl;
		assert(in_range(sinh(complex(9, 4)), complex(-2648.2645189, -3066.2171147), complex_error));
		assert(in_range(sinh(complex(-2.133, -7.22)), complex(-2.4647005, -3.4477388), complex_error));
		std::cout << "Sinh tests passed!" << std::endl;
	}
}