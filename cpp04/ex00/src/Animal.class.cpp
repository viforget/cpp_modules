#include "Animal.class.hpp"

Animal::Animal()
{
	std::cout << "I am an animal" << std::endl;
	return;
}

Animal::~Animal()
{
	std::cout << "I am no longer an animal" << std::endl;
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