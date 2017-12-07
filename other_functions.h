#ifndef OTHER_HEADER
#define OTHER_HEADER
#include "complex.h"
#include "polar_struct.h"
#include <math.h>

namespace acp {

	complex abs(const complex);

	complex arg(const complex);

	complex conj(const complex);

	double imag(const complex&);

	double norm(const complex);

	//complex polar(double mag, double ang=0.0);

	polar_t polar(const complex);

	double real(const complex&);
}

#endif
