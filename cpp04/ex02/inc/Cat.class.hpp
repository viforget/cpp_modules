#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP

# include <iostream>
# include "Animal.class.hpp"
#include "Brain.class.hpp"

class	Cat : public Animal{

public:
	Cat( void );
	Cat( Cat & src);
	virtual ~Cat( void );
	virtual void	makeSound( void ) const;
	Brain *	getBrain( void ) const;

private:
	Brain *	brain;

};

#endif