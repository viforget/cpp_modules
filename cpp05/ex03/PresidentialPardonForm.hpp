#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"
# include <iostream>

class	PresidentialPardonForm : public Form {

public:
	PresidentialPardonForm( void );
	~PresidentialPardonForm( void );
	PresidentialPardonForm( PresidentialPardonForm & src );
	PresidentialPardonForm( std::string target );

	void	operator= ( PresidentialPardonForm const & a );

	void				beExecuted(Bureaucrat const & b) const;
	std::string const	getTarget() const;

private:
	std::string	const _target;
	
};

#endif