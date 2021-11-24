#include "Animal.class.hpp"

Animal::Animal()
{
	return;
}

Animal::~Animal()
{
	return;
}

void	Animal::makeSound() const
{
	std::cout << "..." << std::endl;
}

std::string	Animal::getType() const
{
	return (this->type);
}