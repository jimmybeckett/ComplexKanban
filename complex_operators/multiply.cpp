#include "../complex.h"

namespace acp {
	complex complex::operator*(const complex& other) const {
		complex result;
		result.re = this->re * other.re - this->im * other.im;
		result.im = this->re * other.im + this->im * other.re;
		return result;
	}
}
