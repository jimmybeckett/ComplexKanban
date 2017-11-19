#include "../exp_functions.h"

namespace acp {
	complex exp(const complex c) {
		return complex{ cos(c.get_re()), sin(c.get_im()) };
	}
}