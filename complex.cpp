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

	bool complex::operator<(const complex& other) {
		return this->im < other.im && this->re < other.re;
	}

	bool complex::operator>(const complex& other) {
		return this->im > other.im && this->re > other.re;
	}

	bool complex::operator>=(const complex& other) {
		return this->im >= other.im && this->re >= other.re;
	}

	bool complex::operator<=(const complex& other) {
		return this->im <= other.im && this->re <= other.re;
	}

	complex& complex::operator+=(const complex& other) {
		*this = *this + other;
		return *this;
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
};