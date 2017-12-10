#include "../other_functions.h"
#include "../exp_functions.h"
#define _USE_MATH_DEFINES 
#include <math.h>

namespace acp {
	complex pow(const complex b, const complex exp) {
		complex arg = exp * log(b);
		return complex(std::pow(M_E, arg.get_re()) * std::cos(arg.get_im()), std::pow(M_E, arg.get_re()) * std::sin(arg.get_im()));
		//double arg_1 = std::pow(b.get_re() * b.get_re() + b.get_im() * b.get_im(), exp.get_re() / 2);
		//double arg_2 = std::exp(-exp.get_im() * arg(b));
		//double arg_3 = exp.get_re() * arg(b);
		//double arg_4 = exp.get_im() * std::log(b.get_re() * b.get_re() + b.get_im() * b.get_im()) / 2;
		//temp.set_re(arg_1  * arg_2 * std::cos(arg_3 + arg_4));
		//temp.set_im(std::sin(exp.get_re() * arg(b) + arg_4));
		//return temp;
	}
}

namespace acp {
	complex pow(const double b, const complex exp) {

		return complex(0, 0);
	}
}

namespace acp {
	complex pow(const complex b, const double exp) {

		return complex(0, 0);
	}
}

namespace acp {
	complex pow(const complex b, const int exp) {

		return complex(0, 0);
	}
}
