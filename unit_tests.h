#ifndef UNIT_TEST_HEADER
#define UNIT_TEST_HEADER
#include "complex.h"
#include <iostream>
#include "other_functions.h"
#include <cassert>
#include <vector>

namespace acp {
	const double error = 0.0000001;

	const complex complex_error = complex(error, error);

	void run_unit_tests(std::vector<void(*)()>);

	void sin_test();
	
	void cos_test();

	void tan_test();

	void exp_test();

	void arithmetic_test();

	void trig_tests_all();

	void exp_tests_all();

	void other_tests_all();

	void run_all_tests();
}

#endif