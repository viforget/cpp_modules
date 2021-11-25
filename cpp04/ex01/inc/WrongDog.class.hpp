#ifndef WRONGDOG_CLASS_HPP
# define WRONGDOG_CLASS_HPP

# include <iostream>
# include "WrongAnimal.class.hpp"

class	WrongDog : public WrongAnimal{

public:
	WrongDog( void );
	~WrongDog( void );
	void	makeSound( void ) const;

};

#endif