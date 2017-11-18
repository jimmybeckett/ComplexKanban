#include "../other_functions.h"
#include <math.h>

namespace acp {
	complex abs(const complex c) {
		return complex{ std::abs(c.get_re()), std::abs(c.get_im()) };
    }
}