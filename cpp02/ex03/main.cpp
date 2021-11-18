#include "Fixed.hpp"
#include "Point.hpp"

bool	bsp(Point a, Point b, Point c, Point p);

int main()
{
	Point a(0, 4);
	Point b(4, 7);
	Point c(6, 1);
	Point p(3, 4);
	Point q(1, 1);

	std::cout << bsp(a, b, c, p) << std::endl;
	std::cout << bsp(a, b, c, q) << std::endl;
}