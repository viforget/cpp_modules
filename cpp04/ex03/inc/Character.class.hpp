#ifndef CHARACTER_CLASS_HPP
# define CHARACTER_CLASS_HPP

# include "ICharacter.class.hpp"
# include "AMateria.class.hpp"

class Character : public ICharacter	{

	public:
		Character( std::string const & name );
		~Character();
		std::string const &	getName() const;
		void 				equip( AMateria* m );
		void 				unequip(int idx);
		void				use(int idx, ICharacter& target);

	private:
		AMateria			*(_inv[4]);
		std::string const	_name;
};

#endif
