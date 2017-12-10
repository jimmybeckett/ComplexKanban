#include "../unit_tests.h"

namespace acp {
	void cosh_test() {
		std::cout << "Running cosh tests..." << std::endl;
		assert(in_range(cosh(complex(10, -17)), complex(-3030.4379330, 10588.0944632), complex_error));
		assert(in_range(cosh(complex(-4.5, -1.234)), complex(14.8755960, 42.4746614), complex_error));
		std::cout << "Cosh tests passed!" << std::endl;
	}
}