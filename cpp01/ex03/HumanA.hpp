#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA( std::string name, Weapon &weapon );
		~HumanA( void );

		void		attack( void );
		
		std::string	get_name( void );
		Weapon		&get_weapon( void );

		void		set_name( std::string name );
		void		setWeapon( Weapon weapon );
	
	private:
		std::string _name;
		Weapon      &_weapon;
};

#endif