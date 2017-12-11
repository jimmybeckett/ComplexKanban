#include "../complex.h"

namespace acp {
	std::ostream& operator<<(std::ostream& stream, const acp::complex& complex) {
		stream << "Complex[" << complex.re;
		if (complex.im < 0) {
			stream << " - " << (-complex.im);
		}
		else {
			stream << " + " << complex.im;
		}
		stream << "i]";
		return stream;
	}
}
