#ifndef BRAIN_CLASS_HPP
# define BRAIN_CLASS_HPP

# include <iostream>

class	Brain {

public:
	Brain( void );
	Brain( Brain & src);
	~Brain( void );

	std::string	*get_idea();

private:
	std::string *ideas;

};

#endif