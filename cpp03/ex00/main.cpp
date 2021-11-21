#include "ClapTrap.hpp"

int main()
{
	ClapTrap remi("Remi");

	remi.attack("Bob");
	remi.takeDamage(4);
	remi.beRepaired(1);
	remi.takeDamage(8);
	remi.takeDamage(1);
	remi.beRepaired(5);

}