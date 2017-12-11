#ifndef UTIL_HEADER
#define UTIL_HEADER
#include "complex.h"
#define _USE_MATH_DEFINES 
#include <math.h>

namespace acp {
	double real(const complex);

	double imag(const complex);

	double abs(const complex);

	double norm(const complex);

	complex conj(const complex);
	
	double arg(const complex);

	complex polar(double, double=0.0);
}

#endif
