#include "../unit_tests.h"

namespace acp {
	void sin_test() {
		std::cout << "Running sin tests..." << std::endl;
		assert(in_range(sin(complex(12, -5)), complex(-39.8190486, -62.6166729), complex_error));
		assert(in_range(sin(complex(-3, -12)), complex(-11483.9787388, 80563.0111422), complex_error));
		assert(in_range(sin(complex(15, 4)), complex(17.7582117, -20.7318202), complex_error));
		assert(abs(sin(complex(0, 0)) - complex(0, 0)) == 0);
		std::cout << "Sin tests passed!" << std::endl;

	}
}