#include "Animal.class.hpp"
#include "Cat.class.hpp"
#include "Dog.class.hpp"
#include "WrongAnimal.class.hpp"
#include "WrongCat.class.hpp"
#include "WrongDog.class.hpp"

int main()
{
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
		delete dog;
		delete animal;
	}
	std::cout << "-------------------" << std::endl;
	{
		const WrongAnimal* animal = new WrongAnimal();
		const WrongAnimal* cat = new WrongCat();
		const WrongAnimal* dog = new WrongDog();
		const WrongCat* caty = new WrongCat();

		std::cout << animal->getType() << " " << std::endl;
		std::cout << cat->getType() << " " << std::endl;
		std::cout << dog->getType() << " " << std::endl;
		animal->makeSound();
		cat->makeSound();
		dog->makeSound();
		caty->makeSound();
		delete animal;	
		delete cat;
		delete dog;
		delete caty;
	}
}