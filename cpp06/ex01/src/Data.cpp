#include "Data.hpp"

Data::Data() : _val(0)
{
	return;
}

Data::~Data()
{
	return;
}

Data::Data( Data const & ref ) : _val(ref.getVal())
{
	return;
}

void	Data::operator= (Data const & a)
{
	this->_val = a.getVal();
}

Data::Data( std::string const & str )
{
	this->_val = str;
	return;
}

std::string	Data::getVal() const
{
	return (this->_val);
}
