#include "../trig_functions.h"
#include <math.h>

namespace acp {
	complex tan(const complex c) {
		complex temp1{ std::tan(c.get_re()), -std::tanh(-c.get_im()) };
		complex temp2{1, std::tan(c.get_re()) * std::tanh(-c.get_im()) };
		return temp1 / temp2;
	}
}