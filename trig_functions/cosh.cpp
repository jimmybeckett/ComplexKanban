#include "../trig_functions.h"

namespace acp {
	complex cosh(const complex c) {
		return complex(std::cosh(c.get_re()) * std::cos(c.get_im()), std::sinh(c.get_re()) * std::sin(c.get_im()));
	}
}