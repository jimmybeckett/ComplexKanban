#ifndef RUN_UNIT_TEST_HEADER
#define RUN_UNIT_TEST_HEADER
#include "..\unit_tests.h"

namespace acp {
	void run_unit_tests(std::vector<void(*)()> test_functions) {
		for (void(*tf)() : test_functions) {
			tf();
		}
	}
}

#endif