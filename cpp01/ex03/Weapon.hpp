#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
public:
	Weapon( std::string type );
	~Weapon( void );

	void        setType(std::string type);

	std::string get_type();

private:
	std::string type;
};


#endif