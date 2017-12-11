#include "../complex.h"

namespace acp {
	complex complex::operator+(const complex& other) const {
		complex result;
		result.re = this->re + other.re;
		result.im = this->im + other.im;
		return result;
	}
}
