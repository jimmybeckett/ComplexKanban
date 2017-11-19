#include "../trig_functions.h"

namespace acp {
	complex sin(const complex c) {
		complex temp;
		temp.set_re(std::sin(c.get_re()) * std::cosh(-c.get_im()));
		temp.set_im(-std::cos(c.get_re()) * std::sinh(-c.get_im()));
		return temp;
	}
}