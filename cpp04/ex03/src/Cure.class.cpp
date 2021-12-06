#include "Cure.class.hpp"

Cure::Cure() : AMateria("cure")
{
	return ;
}

Cure::~Cure()
{
	return;
}

AMateria* Cure::clone() const
{
	Cure *ret = new Cure;

	return (ret);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;	
}
