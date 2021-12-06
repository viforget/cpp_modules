#include "Cat.class.hpp"

Cat::Cat()
{
	std::cout << "Hello I am a cat" << std::endl;
	this->type = "Cat";
	return;
}

Cat::~Cat()
{
	std::cout << "Goddbye I was a cat" << std::endl;
	return;
}

void	Cat::makeSound() const
{
	std::cout << "MiAoU" << std::endl;
}