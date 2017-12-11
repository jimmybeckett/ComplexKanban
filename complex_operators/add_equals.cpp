#include "../complex.h"

namespace acp {
	void complex::operator+=(const complex& other) {
		*this = *this + other;
	}
}
