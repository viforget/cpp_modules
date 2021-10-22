#include "Zombie.hpp"

void randomChump( std::string name )
{
    Zombie dead(name);
    dead.announce();
}