#ifndef TRIG_TEST_HEADER
#define TRIG_TEST_HEADER
#include "..\unit_tests.h"

namespace acp {
	void trig_tests_all() {
		std::cout << "Running trig unit tests..." << std::endl;
		std::vector<void(*)()> trig_functions = {sin_test, cos_test, tan_test };
		run_unit_tests(trig_functions);
		std::cout << "All trig tests passed!" << std::endl;
	}
}

#endif