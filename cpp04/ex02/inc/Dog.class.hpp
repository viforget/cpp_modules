#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP

# include <iostream>
# include "Animal.class.hpp"
#include "Brain.class.hpp"

class	Dog : public Animal{

public:
	Dog( void );
	Dog( Dog & src );
	virtual ~Dog( void );
	virtual void	makeSound( void ) const;
	Brain *	getBrain( void ) const;

private:
	Brain *	brain;

};

#endif