#include <string>
#include <regex>
#include "complex.h"

namespace acp {
	complex::complex(const complex& other) {
		this->im = other.im;
		this->re = other.re;
	}
		
	complex& complex::operator=(const complex& other) {
		this->re = other.re;
		this->im = other.im;
		return *this;
	}
	
	complex complex::operator*(const complex& other) const {
		complex result;
		result.re = this->re * other.re - this->im * other.im;
		result.im = this->re * other.im + this->im * other.re;
		return result;
	}

	complex complex::operator/(const complex& other) const {
		complex result;
		result.re = (this->re * other.re + this->im * other.im) / (other.re * other.re + other.im * other.im);
		result.im = (this->im * other.re - this->re * other.im) / (other.re * other.re + other.im * other.im);
		return result;
	}

	complex complex::operator/=(const complex& other) {
		*this = *this / other;
		return *this;
	}
	
	complex& complex::operator*=(const complex& other) {
		*this = *this * other;
		return *this;
	}
		
	complex complex::operator+(const complex& other) const {
		complex result;
		result.re = this->re + other.re;
		result.im = this->im + other.im;
		return result;
	}

	complex& complex::operator+=(const complex& other) {
		*this = *this + other;
		return *this;
	}

	complex complex::operator-(const complex& other) const {
		complex result;
		result.re = this->re - other.re;
		result.im = this->im - other.im;
		return result;
	}

	complex& complex::operator-=(const complex& other) {
		*this = *this - other;
		return *this;
	}

	bool complex::operator==(const complex& other) {
		return this->im == other.im && this->re == other.re;
	}

	bool complex::operator!=(const complex& other) {
		return !(*this == other);
	}

	bool complex::operator<(const complex& other) {
		return this->im < other.im && this->re < other.re;
	}

	bool complex::operator>(const complex& other) {
		return !(*this < other) && *this != other;
	}

	bool complex::operator>=(const complex& other) {
		return *this > other || *this == other;
	}

	bool complex::operator<=(const complex& other) {
		return *this < other || *this == other.re;
	}

	std::ostream& operator<<(std::ostream& stream, const acp::complex& complex) {
		stream << "Complex[" << complex.re;
		if(complex.im < 0) {
			stream << " - " << (-complex.im);
		} else {
			stream << " + " << complex.im;
		}
		stream << "i]";
		return stream;
	}

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