#include "../trig_functions.h"
#include "../exp_functions.h"

namespace acp {
	complex atan(const complex c) {
		return complex(0, 1) * (log(complex(1, 0) - complex(0, 1) * c) - log(complex(1, 0) + complex(0, 1) * c)) / 2;
	}
}