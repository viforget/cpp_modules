#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

public:
	using FragTrap::_hitpoint;
	using ScavTrap::_energy_point;
	using FragTrap::_attack_damage;
	using ScavTrap::attack;

	DiamondTrap( std::string const name );
	~DiamondTrap();

	void	whoAmI();
private :
	std::string _name;
};

#endif