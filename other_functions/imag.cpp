#include <../other_functions.h>
#include "../complex.h"

namespace acp {
	complex exp(const complex c) {
		return 	complex { 0, c.get_im() };;
	}
}