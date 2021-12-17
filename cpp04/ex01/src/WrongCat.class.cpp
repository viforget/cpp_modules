#include "WrongCat.class.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	return;
}

WrongCat::~WrongCat()
{
	return;
}

void	WrongCat::makeSound() const
{
	std::cout << "MiAoU" << std::endl;
}