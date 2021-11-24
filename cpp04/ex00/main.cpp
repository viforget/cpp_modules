#include "Animal.class.hpp"
#include "Cat.class.hpp"
#include "Dog.class.hpp"

int main()
{
	const Animal* animal = new Animal();
	const Animal* cat = new Cat();
	const Animal* dog = new Dog();

	std::cout << animal->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	animal->makeSound();
	cat->makeSound();
	dog->makeSound();
	delete cat;
	delete animal;
}