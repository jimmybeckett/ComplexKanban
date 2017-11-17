#include "../trig_functions.h"
#include <math.h>

namespace acp {
	complex cos(const complex c) {
		complex temp;
		temp.set_re(std::cos(c.get_re()) * std::cosh(-c.get_im()));
		temp.set_im(std::sin(c.get_re()) * std::sinh(-c.get_im()));
		return temp;
	}
}