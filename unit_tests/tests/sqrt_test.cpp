#include "../../unit_tests.h"
#include "../../exp_functions.h"

namespace acp {
	void sqrt_test() {
		std::cout << "Running sqrt tests..." << std::endl;
		std::cout << "A";
		std::cout << sqrt(complex(4, 4)) << std::endl;
		assert(in_range(sqrt(complex(4, 4)), complex(2.1973682, 0.9101797), complex_error));
		std::cout << "B";
		std::cout << sqrt(complex(7, -2)) << std::endl;
		assert(in_range(sqrt(complex(7, -2)), complex(2.6720881, -0.3742391), complex_error));
		std::cout << "C";
		std::cout << sqrt(complex(-4.332, -9.87)) << std::endl;
		assert(in_range(sqrt(complex(-4.332, -9.87)), complex(1.7953868, -2.7487112), complex_error));
		std::cout << "D";
		std::cout << sqrt(complex(0, 0)) << std::endl;
		assert(abs(sqrt(complex(0, 0)) - complex(0, 0)) == 0);
		std::cout << "Sqrt tests passed!" << std::endl;
	}
}
