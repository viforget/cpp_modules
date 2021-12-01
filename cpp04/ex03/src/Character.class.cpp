#include "Character.class.hpp"

Character::Character( std::string const & name ) : _name(name)
{
	for (int i = 0; i < 4; i++)
	{
		this->_inv[i] = NULL;
	}
	return();
}

Character::~Character()
{
	return ;
}

std::string const & getName() const
{
	return (this->_name);
}

void use(int idx, ICharacter& target)
{
	if (this->_inv[idx])
		this->_inv[idx]->use(target);
}

void 				equip(AMateria* m)
{
	int i = 0;

	while (this->_inv[i] != NULL && i < 4)
		i++;
	if (i < 4)
		this->_inv[i] = m;
}

void 				unequip(int idx)
{
	this->_inv[idx] = NULL;
}
