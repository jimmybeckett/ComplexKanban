#include "../unit_tests.h"

namespace acp {
	void log10_test() {
		std::cout << "Running log10 tests..." << std::endl;
		assert(in_range(log10(complex(3, 4)), complex(0.6989700, 0.4027191), complex_error));
		assert(in_range(log10(complex(1.746, 9.998)), complex(1.0064365, 0.6071023), complex_error));
		assert(in_range(log10(complex(-1.2, -5)), complex(0.7111307, -0.7844840), complex_error));
		std::cout << "Log10 tests passed!" << std::endl;
	}
}