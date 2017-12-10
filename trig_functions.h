#ifndef TRIG_HEADER
#define TRIG_HEADER
#include "complex.h"
#define _USE_MATH_DEFINES 
#include <math.h>

namespace acp {
	complex sin(const complex);

	complex cos(const complex);

	complex tan(const complex);

	complex sinh(const complex);

	complex cosh(const complex);

	complex tanh(const complex);

	complex asin(const complex);
	
	complex acos(const complex);

	complex atan(const complex);
}

#endif