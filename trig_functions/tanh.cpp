#include "../trig_functions.h"

namespace acp {
	complex tanh(const complex c) {
		return complex(std::tanh(c.get_re()), std::tan(c.get_im())) / complex(1, std::tanh(c.get_re()) * std::tan(c.get_im()));
	}
}