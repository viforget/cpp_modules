#ifndef WRONGCAT_CLASS_HPP
# define WRONGCAT_CLASS_HPP

# include <iostream>
# include "WrongAnimal.class.hpp"

class	WrongCat : public WrongAnimal{

public:
	WrongCat( void );
	~WrongCat( void );
	void	makeSound( void ) const;

};

#endif