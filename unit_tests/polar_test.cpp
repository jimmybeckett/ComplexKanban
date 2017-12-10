#include "../unit_tests.h"

namespace acp {
	void polar_test() {
		std::cout << "Running polar tests..." << std::endl;
		assert(in_range(polar(5, 0.9273), complex(3, 4), complex(0.0001, 0.0001)));
		assert(in_range(polar(8.82397, -2.4244), complex(-6.65, -5.8), complex(0.001, 0.001)));
		assert(in_range(polar(9.24175, -0.2292), complex(9, -2.1), complex(0.001, 0.001)));
		std::cout << "Polar tests passed!" << std::endl;
	}
}