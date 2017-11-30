#ifndef COS_TEST_HEADER
#define COS_TEST_HEADER
#include "../../unit_tests.h"
#include "../../trig_functions.h"

namespace acp {
	void cos_test() {
		std::cout << "Running cos tests..." << std::endl;
		assert(abs(cos(complex(12, -5)) - complex(62.6223588, -39.8154332)) < complex_error);
		assert(abs(cos(complex(-3, -12)) - complex(-80563.0111483, -11483.9787379)) < complex_error);
		assert(abs(cos(complex(15, 4)) - complex(-20.7457344, -17.7463013)) < complex_error);
		assert(abs(cos(complex(0, 0)) - complex(1, 0)) < complex_error);
		std::cout << "Cos tests passed!" << std::endl;
	}
}

#endif
