#ifndef AMATERIA_CLASS_HPP
# define AMATERIA_CLASS_HPP

class ICharacter;
#include <iostream>
#include "ICharacter.class.hpp"

class	AMateria {

protected:
	std::string const	_type;

public:
	AMateria(std::string const & type);
	virtual ~AMateria();

	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target) = 0;
};

#endif
