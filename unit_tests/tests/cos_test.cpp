#ifndef COS_TEST_HEADER
#define COS_TEST_HEADER
#include "../../unit_tests.h"
#include "../../trig_functions.h"

namespace acp {
	void cos_test() {
		std::cout << "Running cos tests..." << std::endl;
		assert(cos(complex(12, -5)) - complex(62.6223588, 39.8154332) < complex_error);
		assert(cos(complex(-3, -12)) - complex(-11483.9787388, 80563.0111422) < complex_error);
		assert(cos(complex(15, 4)) - complex(17.7582117, 20.7318202) < complex_error);
		assert(cos(complex(0, 0)) - complex(1, 0) < complex_error);
		std::cout << "Cos tests passed!" << std::endl;
	}
}

#endif
