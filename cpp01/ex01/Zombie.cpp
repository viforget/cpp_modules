#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
    return;
}

Zombie::Zombie()
{
    return;
}

Zombie::~Zombie()
{
    std::cout << this->_name << " I your heaaaaaaaaad" << std::endl;
    return;
}

void    Zombie::announce( void )
{
    std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::set_name(std::string name)
{
    this->_name = name;
}