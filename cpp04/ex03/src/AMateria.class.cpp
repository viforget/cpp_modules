#include "AMateria.class.hpp"

AMateria::AMateria(std::string const & type) : _type(type)
{
	return ();
}

AMateria::~AMateria()
{
	return();
}

AMateria::std::string const & getType() const
{
	return (_type);
}
