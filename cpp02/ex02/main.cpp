#include "Fixed.hpp"
#include <iostream>

int main(void) {
	Fixed 		a;
	Fixed const	b(10);
	Fixed const	c(42.42f);
	Fixed const	d(b);
	Fixed const e(Fixed(5.05f) * Fixed(2));

	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << std::endl;

	std::cout << "a + b is " << a + b << std::endl;
	std::cout << "a - b is " << a - b << std::endl;
	std::cout << "a * b is " << a * b << std::endl;
	std::cout << "a / b is " << a / b << std::endl;

	std::cout << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	
	std::cout << std::endl;

	std::cout << "a is " << a.toFloat() << " as float" << std::endl;
	std::cout << "b is " << b.toFloat() << " as float" << std::endl;
	std::cout << "c is " << c.toFloat() << " as float" << std::endl;
	std::cout << "d is " << d.toFloat() << " as float" << std::endl;

	std::cout << std::endl;

	if (a > b)
		std::cout << "a is bigger than b" << std::endl;
	if (a < b)
		std::cout << "a is lower than b" << std::endl;

	std::cout << std::endl;

	std::cout << Fixed::max(a, b) << " is bigger than " << Fixed::min(a, b) << std::endl;
	
	std::cout << std::endl;

	a = 0;
	std::cout << a << " " << a.getRawBits() << std::endl;
	std::cout << "incrementation before: " << ++a << std::endl;
	std::cout << a << " " << a.getRawBits() << std::endl;
	std::cout << "incrementation after: " << a++ << std::endl;
	std::cout << a << " " << a.getRawBits() << std::endl;
	std::cout << "decrementation before: " << --a << std::endl;
	std::cout << a << " " << a.getRawBits() << std::endl;
	std::cout << "decrementation after: " << a-- << std::endl;
	std::cout << a << " " << a.getRawBits() << std::endl;

	std::cout << std::endl;

	std::cout << e << std::endl;

	return 0;
}