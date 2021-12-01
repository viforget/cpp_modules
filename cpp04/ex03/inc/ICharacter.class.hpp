#ifndef ICHARACTER_CLASS_HPP
# define ICHARACTER_CLASS_HPP

# include "AMateria.class.hpp"
class AMateria;

class ICharacter	{

public:
	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0;
	virtual void equip( AMateria* m ) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;

};

#endif
