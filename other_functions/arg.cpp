#include "../other_functions.h"
#include <math.h>

namespace acp {
	double arg(const complex other) {
		double pi = std::atan(1) * 4;
		if (other.get_re() == 0 && other.get_im() > 0) {
			return pi / 2;
		}
		else if (other.get_re() == 0 && other.get_im() < 0) {
			return -pi / 2;
		}
		else if (other.get_re() == 0) {
			return 0;
		}
		double theta = std::atan(other.get_im() / other.get_re());
		if (other.get_re() < 0 && other.get_im() >= 0) {
			theta += pi;
		}
		else if (other.get_re() < 0 && other.get_im() < 0) {
			theta -= pi;
		}

		return theta;
	}
}
