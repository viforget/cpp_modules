#include "Animal.class.hpp"

Animal::Animal()
{
	std::cout << "<An animal is born>" << std::endl;
	return;
}

Animal::~Animal()
{
	std::cout << "<An animal is unborn>" << std::endl;
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