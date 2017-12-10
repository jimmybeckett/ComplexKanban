#include "../exp_functions.h"

namespace acp {
	complex pow(const complex b, const complex exp) {
		complex arg = exp * log(b);
		return complex(std::pow(M_E, arg.get_re()) * std::cos(arg.get_im()), std::pow(M_E, arg.get_re()) * std::sin(arg.get_im()));
	}
}

namespace acp {
	complex pow(const double b, const complex exp) {
		return complex(std::pow(b, exp.get_re()) * std::cos(exp.get_im() * std::log(b)), std::pow(b, exp.get_re()) * std::sin(exp.get_im() * std::log(b)));
	}
}

namespace acp {
	complex pow(const complex b, const double exp) {
		complex temp(exp * log(b).get_re(), exp * log(b).get_im());
		return pow(M_E, temp);
	}
}

namespace acp {
	complex pow(const complex b, const int exp) {
		return pow(b, (double)exp);
	}
}