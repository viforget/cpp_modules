#include "Dog.class.hpp"

Dog::Dog()
{
	this->type = "Dog";
	return;
}

Dog::~Dog()
{
	return;
}

void	Dog::makeSound() const
{
	std::cout << "wuf" << std::endl;
}