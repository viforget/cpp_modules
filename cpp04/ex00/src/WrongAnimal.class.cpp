#include "WrongAnimal.class.hpp"

WrongAnimal::WrongAnimal()
{
	return;
}

WrongAnimal::~WrongAnimal()
{
	return;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "..." << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}