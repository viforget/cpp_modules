#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main( void )
{
    Zombie * hord;
    int N = 4;

    hord = zombieHorde(N, "Shaun");
    delete [] hord;
}