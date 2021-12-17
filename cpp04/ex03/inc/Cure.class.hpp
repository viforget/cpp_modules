#ifndef CURE_CLASS_HPP
# define CURE_CLASS_HPP

#include "AMateria.class.hpp"

class	Cure : public AMateria {

protected:

public:
	Cure();
	~Cure();

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif
