#include "Dog.class.hpp"

Dog::Dog()
{
	std::cout << "Hello I am a dog" << std::endl;
	this->type = "Dog";
	return;
}

Dog::~Dog()
{
	std::cout << "Goddbye I was a dog" << std::endl;
	return;
}

void	Dog::makeSound() const
{
	std::cout << "wuf" << std::endl;
}