#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap( std::string const name ) : ClapTrap( name, 100, 100, 30) {
	std::cout << "I am a FragTrap" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "End of FragTrap" << std::endl;
	return;
}

void FragTrap::highFivesGuy()
{
	std::cout << "FragTrap " << this->_name << " request a high five." << std::endl;
}