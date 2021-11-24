#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

Fixed sign (Point p1, Point p2, Point p3)
{
    return (p1.get_x() - p3.get_x()) * (p2.get_y() - p3.get_y()) - (p2.get_x() - p3.get_x()) * (p1.get_y() - p3.get_y());
}

bool	bsp(Point a, Point b, Point c, Point p)
{
	Fixed d1, d2, d3;
    bool has_neg, has_pos;

    d1 = sign(p, a, b);
    d2 = sign(p, b, c);
    d3 = sign(p, c, a);
	if (d1 == 0 || d2 == 0 || d3 == 0)
		return (0);
    has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
    has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

    return !(has_neg && has_pos);
}