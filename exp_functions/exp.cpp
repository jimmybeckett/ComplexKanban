#include "../exp_functions.h"

namespace acp {
	complex exp(const complex c) {
		complex temp;
		temp.set_re(std::exp(c.get_re()) * std::cos(c.get_im()));
		temp.set_im(std::exp(c.get_re()) * std::sin(c.get_im()));
		return temp;
	}
}