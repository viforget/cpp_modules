#include "Cat.class.hpp"

Cat::Cat()
{
	this->brain = new Brain;
	this->type = "Cat";
	std::cout << "I am grumpy" << std::endl;
	return;
}

Cat::Cat( Cat & src)
{
	std::cout << "CopyCat" << std::endl;
	this->brain = new Brain( *src.brain );
	this->type = "Cat";
	return;
}

Cat::~Cat()
{
	std::cout << "Astalamiaou" << std::endl;
	delete (this->brain);
	return;
}

void	Cat::makeSound() const
{
	std::cout << "MiAoU" << std::endl;
}

Brain *	Cat::getBrain() const
{
	return (this->brain);
}
