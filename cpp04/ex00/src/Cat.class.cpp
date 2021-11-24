#include "Cat.class.hpp"

Cat::Cat()
{
	this->type = "Cat";
	return;
}

Cat::~Cat()
{
	return;
}

void	Cat::makeSound() const
{
	std::cout << "MiAoU" << std::endl;
}