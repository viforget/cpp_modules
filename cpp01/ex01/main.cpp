#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main( void )
{
    Zombie * hord;
    int N = 4;

    hord = zombieHorde(N, "Shaun");
	std::cout << std::endl;
	for (int i = 0; i < N; i++)
		hord[i].announce();
	std::cout << std::endl;
    delete [] hord;
}
