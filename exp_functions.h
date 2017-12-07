#ifndef EXP_HEADER
#define EXP_HEADER
#include "complex.h"
#include <math.h>

namespace acp {
	complex exp(const complex);

	complex log(const complex);

	complex log10(const complex);

	complex pow(const complex b, int exp);
	/*
	complex pow(double b, const complex exp);

	complex pow(const complex b, double exp);

	complex pow(const complex b, const complex exp);
	*/
}

#endif