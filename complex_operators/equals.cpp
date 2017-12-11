#include "..\complex.h"

namespace acp {
	bool complex::operator==(const complex& other) {
		return this->im == other.im && this->re == other.re;
	}
}