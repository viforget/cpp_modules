#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
public:
    Zombie( std::string name );
    Zombie();
    ~Zombie();

    void    set_name(std::string name);
    void    announce( void );

private:
    std::string _name;
    
};

#endif