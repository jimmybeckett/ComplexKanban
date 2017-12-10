#include "../unit_tests.h"

namespace acp {
	void log_test() {
		std::cout << "Running log tests..." << std::endl;
		assert(in_range(log(complex(1, 3)), complex(1.1512925, 1.2490457), complex_error));
		assert(in_range(log(complex(-6, 8)), complex(2.3025850, 2.2142974), complex_error));
		assert(in_range(log(complex(-5, -9)), complex(2.3317195, -2.0778948), complex_error));
		assert(in_range(log(complex(2.765, 3.9012)), complex(1.5647946, 0.9542178), complex_error));
		assert(in_range(log(complex(0, 5)), complex(1.6094379, 1.5707963), complex_error));
		assert(in_range(log(complex(5, 0)), complex(1.6094379, 0), complex_error));
		std::cout << "Log tests passed!" << std::endl;
	}
}