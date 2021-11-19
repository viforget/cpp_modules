#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string const name ) : _name(name), _hitpoint(10), _energy_point(10), _attack_damage(0)
{
	std::cout << "Hi, I am " << name << std::endl;
	return;
}

ClapTrap::~ClapTrap()
{
	return;
}

void	ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
}