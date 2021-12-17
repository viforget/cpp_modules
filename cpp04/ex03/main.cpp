#include "AMateria.class.hpp"
#include "Ice.class.hpp"
#include "Cure.class.hpp"
#include "ICharacter.class.hpp"
#include "Character.class.hpp"
#include "IMateriaSource.class.hpp"
#include "MateriaSource.class.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	AMateria* tmp;
	
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;
	return 0;
}
