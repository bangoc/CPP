#include <iostream>
#include <string>
#include <sstream>

class Complex {
	public:
		std::string GetString();
		Complex(double real, double imag = 0);
		Complex operator+(const Complex& other);
		Complex operator-(const Complex& other);
		double real() {  // implicit inline
			return real_;  
		}
		double imag() {  // implicit inline
			return imag_;
		}
	private:
		double real_ = 0;	 // In-Class Initializers
		double imag_ = 0;  // In-Class Initializers
};

// definitions
std::string Complex::GetString() {
	std::stringstream ss;
	ss << real_ << " + " << imag_ << "i";
	return ss.str();
}

Complex::Complex(double real, double imag):
		real_(real), imag_(imag) {}

Complex Complex::operator+(const Complex& other) {
	Complex result = *this;
	result.real_ += other.real_;
	result.imag_ += other.imag_;
	return result;
}

Complex Complex::operator-(const Complex& other) {
	Complex result = *this;
	result.real_ -= other.real_;
	result.imag_ -= other.imag_;
	return result;
}

int main() {
	// Complex c0;  // initializer missing
  Complex c1(3, 5);
  Complex c2(2, 6);
  Complex c3 = c1 + c2;
  std::cout << c3.GetString() << std::endl;
  Complex c5(1);

  // implicit conversion
  Complex c7 = {1};
}
