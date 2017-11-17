#include "../trig_functions.h"
#include <math.h>

namespace acp {
	complex sin(const complex c) {
		complex temp;

		temp.re = sin(c.re) * cosh(c.im);
		temp.im = cos(c.re) * sinh(c.im);

		return temp;
	}
}