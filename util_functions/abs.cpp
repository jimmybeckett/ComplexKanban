#include "../util_functions.h"

namespace acp {
	double abs(const complex c) {
		return sqrt(c.get_re() * c.get_re() + c.get_im() * c.get_im());
    }
}