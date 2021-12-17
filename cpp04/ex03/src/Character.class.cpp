#include "Character.class.hpp"

Character::Character( std::string const & name ) : _name(name)
{
	for (int i = 0; i < 4; i++)
	{
		this->_inv[i] = NULL;
	}
	return;
}

Character::Character( Character & cp ) : _name(cp.getName())
{
	for (int i = 0; i < 4; i++)
		this->_inv[i] = cp.getInv(i);
	return;
}

Character::~Character()
{
	return ;
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void 				Character::use(int idx, ICharacter& target)
{
	if (this->_inv[idx])
		this->_inv[idx]->use(target);
}

void 				Character::equip(AMateria* m)
{
	int i = 0;

	while (this->_inv[i] != NULL && i < 4)
		i++;
	if (i < 4)
		this->_inv[i] = m;
}

void 				Character::unequip(int idx)
{
	this->_inv[idx] = NULL;
}

AMateria *			Character::getInv(int idx )
{
	if (idx >= 0 && idx < 4 )
		return (this->_inv[idx]);
	return (NULL);
}
