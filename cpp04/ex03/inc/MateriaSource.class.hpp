#ifndef MATERIASOURCE_CLASS_HPP
# define MATERIASOURCE_CLASS_HPP

# include "IMateriaSource.class.hpp"
# include "AMateria.class.hpp"

class MateriaSource	: public IMateriaSource {

public:
	MateriaSource();
	~MateriaSource();

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);

	private:
		AMateria	*(_inv[4]);
};

#endif
