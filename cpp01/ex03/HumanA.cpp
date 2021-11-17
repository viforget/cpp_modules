#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ) : _name(name), _weapon(weapon)
{
	return;
}

HumanA::~HumanA( void )
{
	return;
}

void    HumanA::attack( void )
{
		std::cout << this->get_name() << " attacks with his " << this->get_weapon().get_type() << std::endl;
}

std::string	HumanA::get_name( void )
{
	return (this->_name);
}

Weapon		&HumanA::get_weapon( void )
{
	return (this->_weapon);
}

void		HumanA::set_name( std::string name )
{
	_name = name;
	return;
}

void		HumanA::setWeapon( Weapon weapon )
{
	_weapon = weapon;
	return;
}
