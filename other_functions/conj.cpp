#include "../other_functions.h"

namespace acp {
	complex conj(const complex other) {
		return complex(other.get_re(), -other.get_im());
	}
}
