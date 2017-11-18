#include <../exp_functions.h>
#include <math.h>
#include "../complex.h"

namespace acp {
	complex exp(const complex c) {
		return complex{ cos(c.get_re()), sin(c.get_im()) };
	}
}