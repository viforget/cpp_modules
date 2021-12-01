#include "Ice.class.hpp"

Ice::Ice() _type("ice")
{
	return ();
}

Ice::Ice()
{
	return;
}

AMateria* clone() const
{
	AMateria	cpy(this->_type);

	return (cpy);
}

void use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *";	
}