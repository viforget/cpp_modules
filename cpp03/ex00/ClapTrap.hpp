#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap {

public:
	ClapTrap( std::string const name );
	~ClapTrap( void );
	void	attack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

private:
	std::string _name;
	int			_hitpoint; //HP
	int			_energy_point; //
	int			_attack_damage;

};

#endif