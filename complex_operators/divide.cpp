#include "../complex.h"

namespace acp {
	complex complex::operator/(const complex& other) const {
		complex result;
		result.re = (this->re * other.re + this->im * other.im) / (other.re * other.re + other.im * other.im);
		result.im = (this->im * other.re - this->re * other.im) / (other.re * other.re + other.im * other.im);
		return result;
	}
}
