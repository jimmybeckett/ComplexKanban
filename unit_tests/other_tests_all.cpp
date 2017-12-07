#ifndef OTHER_TEST_HEADER
#define OTHER_TEST_HEADER
#include "../unit_tests.h"

namespace acp {
	void other_tests_all() {
		std::cout << "Running other unit tests..." << std::endl;
		std::vector<void(*)()> other_functions = { abs_test };
		run_unit_tests(other_functions);
		std::cout << "All other tests passed!" << std::endl;
	}
}

#endif
