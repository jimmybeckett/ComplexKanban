#include "../other_functions.h"
#include "../polar_struct.h"

namespace acp {
	polar_t polar(const complex c) {
		polar_t ret;
		ret.r = abs(c);
		ret.costheta = c.get_re()/ret.r;
		ret.sintheta = c.get_im()/ret.r;
		return ret;
	}
}
