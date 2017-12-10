#ifndef EXP_HEADER
#define EXP_HEADER
#include "complex.h"
#include <math.h>

namespace acp {
	complex exp(const complex);

	complex log(const complex);

	complex log10(const complex);

	complex pow(const complex, const complex);

	complex pow(const double, const complex);

	complex pow(const complex, const double);

	complex pow(const complex, const int);

	complex sqrt(const complex);
	
}

#endif