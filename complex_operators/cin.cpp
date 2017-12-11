#include <string>
#include <regex>
#include "../complex.h"

namespace acp {
	std::istream& operator>>(std::istream& stream, acp::complex& complex) { //ex. 3 + 2i
		std::string input;
		getline(stream, input);
		std::regex re("^\\s*([+-]?\\d+(?:\\.\\d+)?)\\s*([+-])\\s*(\\d+(?:\\.\\d+)?)\\s*i\\s*$");
		if (!regex_match(input, re)) {
			std::cout << "Invalid input" << std::endl;
			return stream;
		}
		std::smatch match;
		std::regex_search(input, match, re);
		complex.set_re(stof(match.str(1)));
		complex.set_im(stof(match.str(2) + match.str(3)));
		return stream;
	}
}
