#include "Fixed.hpp"
#include <iostream>
#include <tgmath.h>

Fixed::Fixed()
{
	this->value = 0;
	return ;
}

Fixed::~Fixed()
{
	return ;
}

Fixed::Fixed( Fixed const & src )
{
	this->setRawBits(src.getRawBits());
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
	Fixed c(0);

	c.setRawBits(a.getRawBits() + b.getRawBits());
	return (c);
}

Fixed			operator-(Fixed const& a, Fixed const& b)
{
	Fixed c(0);

	c.setRawBits(a.getRawBits() - b.getRawBits());
	return (c);
}

Fixed			operator*(Fixed const& a, Fixed const& b)
{
	Fixed c(a.toFloat() * b.toFloat());

	return (c);
}

Fixed			operator/(Fixed const& a, Fixed const& b)
{
	Fixed c(a.toFloat() / b.toFloat());

	return (c);
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

Fixed	&	Fixed::operator++()
{
	this->value += 1;
	return (*this);
}

Fixed		Fixed::operator++( int )
{
	Fixed	tmp(*this);

	this->value += 1;
	return (tmp);
}

Fixed	&	Fixed::operator--()
{
	this->value -= 1;
	return (*this);
}

Fixed		Fixed::operator--( int )
{
	Fixed	tmp(*this);

	this->value -= 1;
	return (tmp);
}
