#include "Point.hpp"
#include "Fixed.hpp"
#include <iostream>

Point::Point()
{
	Fixed temp(0);

	this->x = temp;
	this->y = Fixed(0);
	return ;
}

Point::Point( Point const & src )
{
	this->x = Fixed(a.get_x());
	this->y = Fixed(a.get_y());
	return ;
}

Point::Point( Fixed const x, Fixed const y )
{
	this->x = Fixed(x);
	this->y = Fixed(y);
	return ;
}

Point::~Point()
{
	return ;
}

void	Point::operator= ( Point const & a)
{
	this->x = Fixed(a.get_x());
	this->y = Fixed(a.get_y());
	return ;
}
