#include "../unit_tests.h"

namespace acp {
	void sqrt_test() {
		std::cout << "Running sqrt tests..." << std::endl;
		assert(in_range(sqrt(complex(4, 4)), complex(2.1973682, 0.9101797), complex_error));
		assert(in_range(sqrt(complex(7, -2)), complex(2.6720881, -0.3742391), complex_error));
		assert(in_range(sqrt(complex(-4.332, -9.87)), complex(1.7953868, -2.7487112), complex_error));
		assert(abs(sqrt(complex(0, 0)) - complex(0, 0)) == 0);
		std::cout << "Sqrt tests passed!" << std::endl;
	}
}