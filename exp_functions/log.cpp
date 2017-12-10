#include "../exp_functions.h"
#include "../util_functions.h"

namespace acp {
	complex log(const complex other) {
		complex temp(0, 0);
		temp.set_re(std::log(abs(other)));
		temp.set_im(arg(other));
		return temp;
	}
}