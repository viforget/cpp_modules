#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string const name ) : _name(name), _hitpoint(10), _energy_point(10), _attack_damage(0)
{
	(void)this->_energy_point;
	std::cout << "Hi, I am " << name << std::endl;
	return;
}

ClapTrap::ClapTrap( std::string const name, int hitpoint, int energy_point, int attack_damage ) : _name(name), _hitpoint(hitpoint), _energy_point(energy_point), _attack_damage(attack_damage)
{
	std::cout << "Hi, I am " << name << std::endl;
	return;
}

ClapTrap::~ClapTrap()
{
	std::cout << "End of ClapTrap" << std::endl;
	return;
}

void	ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitpoint == 0)
		std::cout << "ClapTrap " << this->_name << " is already dead :(" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name << " take " << amount << " points of damage!" << std::endl;
		if ((int) amount > this->_hitpoint)
		{
			this->_hitpoint = 0;
			std::cout << "ClapTrap " << this->_name << " is dead :(" << std::endl;
		}
		else
		{
			this->_hitpoint -= amount;
			std::cout << "ClapTrap " << this->_name << " has " << this->_hitpoint << " HP left." << std::endl;
		}
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitpoint == 0)
		std::cout << "ClapTrap " << this->_name << " is already dead :(" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name << " gain " << amount << " HP !" << std::endl;
		this->_hitpoint += amount;
		std::cout << "ClapTrap " << this->_name << " has " << this->_hitpoint << " HP." << std::endl;
	}
}
