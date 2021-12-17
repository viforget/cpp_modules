#include "AMateria.class.hpp"

AMateria::AMateria(std::string const & type) : _type(type)
{
	return ;
}

AMateria::~AMateria()
{
	return ;
}

std::string const & AMateria::getType() const
{
	return (_type);
}
