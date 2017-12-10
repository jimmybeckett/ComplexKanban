#include "../exp_functions.h"
#include "../util_functions.h"

namespace acp {
	complex log10(const complex other) {
		return log(other) / std::log(10);
	}
}