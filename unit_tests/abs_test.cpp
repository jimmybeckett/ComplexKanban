#include "../unit_tests.h"

namespace acp {
	void abs_test() {
		std::cout << "Running abs tests..." << std::endl;
		assert(in_range(abs(complex(6, -4)), 7.2111025, error));
		assert(in_range(abs(complex(.5, -11)), 11.0113578, error));
		assert(in_range(abs(complex(2, -9.977)), 10.1754866, error));
		assert(in_range(abs(complex(0, 0)), 0, error));
		std::cout << "Abs tests passed!" << std::endl;
	}
}