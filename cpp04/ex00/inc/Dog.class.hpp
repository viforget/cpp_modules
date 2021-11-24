#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP

# include <iostream>
# include "Animal.class.hpp"

class	Dog : public Animal{

public:
	Dog( void );
	virtual ~Dog( void );
	virtual void	makeSound( void ) const;

};

#endif