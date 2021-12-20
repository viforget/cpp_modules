#include "iter.hpp"
#include <iostream>

void	aff_nb(int & nb)
{
	std::cout << "the number is " << nb << std::endl;
}

void	aff_fnb(float & nb)
{
	std::cout << "the float is " << nb << std::endl;
}


int main()
{
	int nb[] = {1, 2, 3, 4, 5};

	float fnb[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	iter<int>(nb, 5, aff_nb);
	iter<float>(fnb, 5, aff_fnb);
}
