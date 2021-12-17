#ifndef SHRIBBERYCREATIONFORM_HPP
# define SHRIBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <iostream>
# include <iomanip>
# include <fstream>

class	ShrubberyCreationForm : public Form {

public:
	ShrubberyCreationForm( void );
	~ShrubberyCreationForm( void );
	ShrubberyCreationForm( ShrubberyCreationForm & src );
	ShrubberyCreationForm( std::string name );
	ShrubberyCreationForm( std::string target, std::string name );

	void	operator= ( ShrubberyCreationForm const & a );

	void	beExecuted(Bureaucrat const & b) const;
	std::string const	getTarget() const;

private:
	std::string	const _target;
	
};

#endif