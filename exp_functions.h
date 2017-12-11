#ifndef EXP_HEADER
#define EXP_HEADER
#include "complex.h"
#define _USE_MATH_DEFINES 
#include <math.h>

namespace acp {
	complex pow(const complex, const complex);

	complex pow(const double, const complex);

	complex pow(const complex, const double);

	complex pow(const complex, const int);

	complex sqrt(const complex);

	complex exp(const complex);

	complex log(const complex);

	complex log10(const complex);
}

#endif