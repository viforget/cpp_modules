#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie * hord = new Zombie[N];
    
    for (int i = 0; i < N; i++)
    {
        hord[i].set_name(name + std::to_string(i));
        hord[i].announce();
    }
    return(hord);
}
