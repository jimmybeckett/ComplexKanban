#ifndef TAN_TEST_HEADER
#define TAN_TEST_HEADER
#include "../../unit_tests.h"
#include "../../trig_functions.h"

namespace acp {
	void conj_test() {
		std::cout << "Running conj tests..." << std::endl;
		assert(conj(complex(5, 4)) == complex(5, -4));
		assert(conj(complex(1, -1)) == complex(1, 1));
		std::cout << "Tan conj passed!" << std::endl;
	}
}

#endif
