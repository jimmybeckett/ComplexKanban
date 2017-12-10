#include "../unit_tests.h"

namespace acp {
	void atan_test() {
		std::cout << "Running atan tests..." << std::endl;
		assert(in_range(atan(complex(2, -5)), complex(1.4998477, -0.1732867), complex_error));
		assert(in_range(atan(complex(9.6, 11.113)), complex(1.5261928, 0.0514737), complex_error));
		assert(in_range(atan(complex(-1.93, -50.8)), complex(-1.5700492, -0.0196591), complex_error));
		assert(in_range(atan(complex(-6, 7)), complex(-1.4998477, 0.0821260), complex_error));
		std::cout << "Atan tests passed!" << std::endl;
	}
}