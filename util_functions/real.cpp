#include "../util_functions.h"

namespace acp {
	double real(const complex other) {
		return other.get_re();
	}
}