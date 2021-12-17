#include "Dog.class.hpp"

Dog::Dog()
{
	this->brain = new Brain;
	this->type = "Dog";
	std::cout << "I wanna be your friend" << std::endl;
	return;
}

Dog::Dog( Dog & src)
{
	std::cout << "Whouf am I ?" << std::endl;
	this->brain = new Brain( *src.brain );
	this->type = "Dog";
	return;
}

Dog::~Dog()
{
	std::cout << "This is my last wouf" << std::endl;
	delete (this->brain);
	return;
}

void	Dog::makeSound() const
{
	std::cout << "wuf" << std::endl;
}

Brain *	Dog::getBrain() const
{
	return (this->brain);
}
