#ifndef ICE_CLASS_HPP
# define ICE_CLASS_HPP

#include "AMateria.class.hpp"

class	Ice : public AMateria {

protected:

public:
	Ice();
	~Ice();

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif
