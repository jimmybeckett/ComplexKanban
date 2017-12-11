#include "../complex.h"

namespace acp {
	complex complex::operator-() const {
		return *this * complex(-1);
	}
}
