#include "../util_functions.h"

namespace acp {
	double arg(const complex other) {
		if (other.get_re() == 0 && other.get_im() > 0) {
			return M_PI / 2;
		}
		else if (other.get_re() == 0 && other.get_im() < 0) {
			return -M_PI / 2;
		}
		else if (other.get_re() == 0) {
			return 0;
		}
		double theta = std::atan(other.get_im() / other.get_re());
		if (other.get_re() < 0 && other.get_im() >= 0) {
			theta += M_PI;
		}
		else if (other.get_re() < 0 && other.get_im() < 0) {
			theta -= M_PI;
		}

		return theta;
	}
}