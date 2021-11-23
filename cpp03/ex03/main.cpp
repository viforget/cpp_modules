#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	{
		ClapTrap remi("Remi");

		remi.attack("Bob");
		remi.takeDamage(4);
		remi.beRepaired(1);
		remi.takeDamage(8);
		remi.takeDamage(1);
		remi.beRepaired(5);
	}
	std::cout << "------------" << std::endl;
	{
		ScavTrap tom("Thomas");

		tom.attack("Jack");
		tom.takeDamage(4);
		tom.beRepaired(1);
		tom.takeDamage(8);
		tom.takeDamage(1);
		tom.beRepaired(5);
		tom.guardGate();
	}
	std::cout << "------------" << std::endl;
	{
		FragTrap math("Mathieu");

		math.attack("James");
		math.takeDamage(4);
		math.beRepaired(1);
		math.takeDamage(8);
		math.takeDamage(1);
		math.beRepaired(5);
		math.highFivesGuy();
	}
	std::cout << "------------" << std::endl;
	{
		DiamondTrap steeve("Steeve");

		steeve.attack("Alex");
		steeve.takeDamage(4);
		steeve.beRepaired(1);
		steeve.takeDamage(8);
		steeve.takeDamage(1);
		steeve.beRepaired(5);
		steeve.guardGate();
		steeve.highFivesGuy();
		steeve.whoAmI();
	}
}
