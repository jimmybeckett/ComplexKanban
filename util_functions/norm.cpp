#include "../util_functions.h"
#include "../exp_functions.h"

namespace acp {
	double norm(const complex comp) {
		return comp.get_re() * comp.get_re() + comp.get_im() * comp.get_im();
	}
}