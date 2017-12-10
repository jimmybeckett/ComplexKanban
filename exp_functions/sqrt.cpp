#include "../other_functions.h"
#include "../polar_struct.h"
#include <cmath>

namespace acp {
	double sqrt(const complex c) {
		polar_t p = polar(c);
		double ncos = cos(acos(p.costheta)/2);
		double nsin = sin(asin(p.sintheta)/2);
		double nr = sqrt(p.r);
		return abs(complex(nr, 0) * (complex(ncos, 0) + complex(0, 1) * complex(nsin, 0)));
    }
}
