#include "Fixed.hpp"
#include <iostream>
#include <tgmath.h>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed( Fixed const & src )
{
	std::cout << "Copy constructor called" << std::endl;
	this->setRawBits(src.getRawBits() << this->bitsf);
	return ;
}

Fixed::Fixed( int nb )
{
	this->value = nb << this->bitsf;
	return;
}

Fixed::Fixed( float nb )
{
	this->value = (int)(roundf(nb * (1 << this->bitsf)));
}

int Fixed::getRawBits(void) const
{
	return (this->value);
}

void	Fixed::setRawBits( int const raw )
{
	this->value = raw;
	return ;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->value / (1 << this->bitsf));
}

int		Fixed::toInt(void) const
{
	return (this->value >> this->bitsf);
}

void	Fixed::operator= ( Fixed const &a )
{
	std::cout << "Assignation operator called" << std::endl;
	this->value = a.getRawBits();

}

std::ostream&	operator<<( std::ostream &flux, Fixed const& nbF )
{
    flux << nbF.toFloat();
    return flux;
}

bool	operator<(Fixed const &a, Fixed const& b)
{
	return (a.getRawBits() < b.getRawBits());
}

bool	operator>(Fixed const &a, Fixed const& b)
{
	return (a.getRawBits() > b.getRawBits());
}

bool	operator<=(Fixed const &a, Fixed const& b)
{
	return (a.getRawBits() <= b.getRawBits());
}

bool	operator>=(Fixed const &a, Fixed const& b)
{
	return (a.getRawBits() >= b.getRawBits());
}

bool	operator==(Fixed const &a, Fixed const& b)
{
	return (a.getRawBits() == b.getRawBits());
}

bool	operator!=(Fixed const &a, Fixed const& b)
{
	return (a.getRawBits() != b.getRawBits());
}

Fixed			operator+(Fixed const& a, Fixed const& b)
{
	Fixed c;

	c.setRawBits(a.getRawBits() + b.getRawBits());
	return (c);
}

Fixed			operator-(Fixed const& a, Fixed const& b)
{
	Fixed c;

	c.setRawBits(a.getRawBits() - b.getRawBits());
	return (c);
}

Fixed			operator*(Fixed const& a, Fixed const& b)
{
	Fixed ret(a.toFloat() * b.toFloat());

	return (ret);
}

Fixed			operator/(Fixed const& a, Fixed const& b)
{
	Fixed ret(a.toFloat() / b.toFloat());

	return (ret);
}

const Fixed & Fixed::max(const Fixed & a, const Fixed & b )
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	else
		return (b);
}

const Fixed & Fixed::min(const Fixed & a, const Fixed & b )
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	else
		return (b);
}
