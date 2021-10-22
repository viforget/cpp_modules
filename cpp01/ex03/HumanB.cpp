#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name)
{
	this->_weapon = NULL;
	return;
}

HumanB::~HumanB( void )
{
	return;
}

void    HumanB::attack( void )
{
	if (this->get_weapon())
		std::cout << this->get_name() << " attacks with his " << this->get_weapon()->get_type() << std::endl;
	else
		std::cout << this->get_name() << " don't have any weapon" << std::endl;
}

std::string	HumanB::get_name( void )
{
	return (this->_name);
}

Weapon		*HumanB::get_weapon( void )
{
	return (this->_weapon);
}

void		HumanB::set_name( std::string name )
{
	_name = name;
	return;
}

void		HumanB::setWeapon( Weapon &new_weapon )
{
	_weapon = &new_weapon;
	return;
}