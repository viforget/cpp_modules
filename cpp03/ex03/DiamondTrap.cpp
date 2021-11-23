#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string const name ) : ClapTrap( name + "_clap_name" , 100, 50, 30), ScavTrap( name + "_clap_name" ), FragTrap( name + "_clap_name" ), _name(name) {
	std::cout << "I am " << this->_name << ", a DiamondTrap" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "End of DiamondTrap" << std::endl;
	return;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "Hi, I am " << this->ClapTrap::_name << " but you can call me " << this->_name << "." << std::endl;
}