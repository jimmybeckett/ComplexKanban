#include "../trig_functions.h"

namespace acp {
	complex sinh(const complex c) {
		return complex(std::sinh(c.get_re()) * std::cos(c.get_im()), std::cosh(c.get_re()) * std::sin(c.get_im()));
	}
}