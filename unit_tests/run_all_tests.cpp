#ifndef ALL_TEST_HEADER
#define ALL_TEST_HEADER
#include "../unit_tests.h"

namespace acp {
	void run_all_tests() {
		std::cout << "Running all unit tests..." << std::endl;
		std::vector<void(*)()> functions = { pow_test, log_test, arg_test, arithmetic_test, sin_test, cos_test, tan_test, exp_test, abs_test, conj_test, sqrt_test };
		run_unit_tests(functions);
		std::cout << "All tests passed!" << std::endl;
	}
}

#endif
