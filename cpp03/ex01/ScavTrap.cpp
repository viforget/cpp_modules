#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap( std::string const name ) : ClapTrap( name, 100, 50, 200) {
	std::cout << "I am a ScavTrap" << std::endl;
}

ScavTrap::~ScavTrap()
{
	return;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " have enterred in Gate keeper mode." << std::endl;
}