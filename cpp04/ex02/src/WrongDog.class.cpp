#include "WrongDog.class.hpp"

WrongDog::WrongDog()
{
	this->type = "WrongDog";
	return;
}

WrongDog::~WrongDog()
{
	return;
}

void	WrongDog::makeSound() const
{
	std::cout << "wuf" << std::endl;
}