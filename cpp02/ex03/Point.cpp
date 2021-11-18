#include "Point.hpp"
#include "Fixed.hpp"
#include <iostream>

Point::Point() : x(0), y(0)
{
	return ;
}

Point::Point( Point const & src ) : x(src.get_x()), y(src.get_y())
{
	return ;
}

Point::Point( Fixed const x, Fixed const y ) : x(x), y(y)
{
	return ;
}

Point::~Point()
{
	return ;
}

Point	&	Point::operator= ( Point & a)
{
	return (a);
}

Fixed	Point::get_x() const
{
	return (this->x);
}

Fixed	Point::get_y() const
{
	return (this->y);
}
