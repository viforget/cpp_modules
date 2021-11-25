#include "Animal.class.hpp"
#include "Cat.class.hpp"
#include "Dog.class.hpp"
#include "WrongAnimal.class.hpp"
#include "WrongCat.class.hpp"
#include "WrongDog.class.hpp"
#include "Brain.class.hpp"

int main()
{
{
	const Animal* (animals[10]);
	
	for	(int i = 0; i < 10; i++)
	{
		if (i % 2)
			animals[i] = new Cat;
		else
			animals[i] = new Dog;
	}
	std::cout << "---------------" << std::endl;
	for	(int i = 0; i < 10; i++)
	{
		animals[i]->makeSound();
	}
	std::cout << "---------------" << std::endl;
	for	(int i = 0; i < 10; i++)
	{
		delete animals[i];
	}
}
std::cout << "=================" << std::endl;
{
	Cat * mew = new Cat;
	Cat * mew2 = new Cat( *mew );
	Dog * dog = new Dog;
	Dog * dog2 = new Dog( *dog );

	delete dog;
	delete dog2;
	delete mew;
	delete mew2;
}
}