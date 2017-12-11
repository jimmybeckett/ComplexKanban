#include "../unit_tests.h"

namespace acp {
	void acos_test() {
		std::cout << "Running acos tests..." << std::endl;
		assert(in_range(acos(complex(4, 2)), complex(0.4738747, -2.1835852), complex_error));
		assert(in_range(acos(complex(-6.6, -4.1)), complex(2.5819890, 2.7415742), complex_error));
		assert(in_range(acos(complex(-5.3, 9.97)), complex(2.0577789, -3.1182686), complex_error));
		assert(in_range(acos(complex(18, -1.5)), complex(0.0832683, 3.5862226), complex_error));
		std::cout << "Acos tests passed!" << std::endl;
	}
}