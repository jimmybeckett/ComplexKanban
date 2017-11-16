#include <../trig.h>
#include <math.h>

namespace acp {
	complex cos(const complex c) {
		complex temp;

		temp.re = cos(c.re) * cosh(c.im);
		temp.im = sin(c.re) * sinh(c.im);

		return temp;
	}
}