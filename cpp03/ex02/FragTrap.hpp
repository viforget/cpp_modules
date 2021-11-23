#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"


class	FragTrap : public ClapTrap {

public:
	FragTrap( std::string const name );
	~FragTrap( void );

	void	attack(std::string const & target);
	void	highFivesGuy( void );
	
private:

};

#endif