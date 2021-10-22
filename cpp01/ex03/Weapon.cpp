#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : type(type)
{
    return;
}

Weapon::~Weapon( void )
{
    return;
}

std::string Weapon::get_type()
{
    return (this->type);
}

void Weapon::setType(std::string type)
{
    this->type = type;
    return;
}