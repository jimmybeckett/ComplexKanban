#ifndef EXP_TEST_HEADER
#define EXP_TEST_HEADER
#include "../unit_tests.h"

namespace acp {
	void exp_tests_all() {
		std::cout << "Running exponent unit tests..." << std::endl;
		std::vector<void(*)()> exp_functions = { exp_test };
		run_unit_tests(exp_functions);
		std::cout << "All exponent tests passed!" << std::endl;
	}
}

#endif
