#include "Zombie.hpp"

void randomChump( std::string name );
Zombie* newZombie( std::string name );


int main()
{
    Zombie * shaun = new Zombie("Shaun");
    Zombie * rom;
    shaun->announce();
    delete shaun;

    rom = newZombie("George Romero");
    rom->announce();
    delete rom;

    randomChump("Gims");
    return (0);
}