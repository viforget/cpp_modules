#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP

# include <iostream>

class	Animal {

public:
	virtual ~Animal( void ) = 0;
	virtual void	makeSound( void ) const;
	virtual std::string		getType( void ) const;

protected:
	Animal( void );
	std::string type;

};

#endif