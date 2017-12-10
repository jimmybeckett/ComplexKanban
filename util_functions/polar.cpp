#include "../util_functions.h"

namespace acp {
	complex polar(double mag, double ang) {
		return complex(mag * std::cos(ang), mag * std::sin(ang));
	}
}