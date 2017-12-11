#include "../complex.h"

namespace acp {
	complex& complex::operator=(const complex& other) {
		this->re = other.re;
		this->im = other.im;
		return *this;
	}
}