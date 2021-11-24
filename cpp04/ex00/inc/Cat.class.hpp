#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP

# include <iostream>
# include "Animal.class.hpp"

class	Cat : public Animal{

public:
	Cat( void );
	virtual ~Cat( void );
	virtual void	makeSound( void ) const;

};

#endif