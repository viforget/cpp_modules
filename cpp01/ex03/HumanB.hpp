#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB( std::string name );
		~HumanB( void );

		void		attack( void );
		
		std::string	get_name( void );
		Weapon		*get_weapon( void );

		void		set_name( std::string name );
		void		setWeapon( Weapon &new_weapon );
	
	private:
		Weapon      *_weapon;
		std::string _name;
};

#endif
