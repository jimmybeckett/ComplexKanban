#include <../other_functions.h>
#include "../complex.h"

namespace acp {
	double real(const complex c) {
		return c.get_re();
	}
}