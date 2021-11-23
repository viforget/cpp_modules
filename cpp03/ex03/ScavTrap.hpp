#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"


class	ScavTrap : virtual public ClapTrap {

public:
	ScavTrap( std::string const name );
	~ScavTrap( void );

	void guardGate( void );
	
private:

};

#endif