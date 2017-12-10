#ifndef UNIT_TEST_HEADER
#define UNIT_TEST_HEADER
#include "complex.h"
#include "util_functions.h"
#include "trig_functions.h"
#include "exp_functions.h"
#include <iostream>
#include <cassert>

namespace acp {
	const double error = 0.0000001;

	const complex complex_error = complex(error, error);

	inline bool in_range(const complex a, const complex b, const complex error) {
		return abs(a - b) < abs(error);
	}

	inline bool in_range(const double a, const double b, const double error) {
		return std::abs(a - b) < error;
	}

	void abs_test();

	void acos_test();
	
	void arg_test();
	
	void arithmetic_test();

	void asin_test();

	void atan_test();
	
	void conj_test();
	
	void cos_test();

	void cosh_test();
	
	void exp_test();

	void imag_test();
	
	void log_test();

	void log10_test();

	void norm_test();

	void polar_test();
	
	void pow_test();

	void real_test();

	void sin_test();

	void sinh_test();

	void sqrt_test();

	void tan_test();

	void tanh_test();
}

#endif