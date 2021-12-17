#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <iostream>
# include <cstdlib>

class	RobotomyRequestForm : public Form {

public:
	RobotomyRequestForm( void );
	~RobotomyRequestForm( void );
	RobotomyRequestForm( RobotomyRequestForm & src );
	RobotomyRequestForm( std::string target );
	RobotomyRequestForm( std::string target, std::string name );

	void	operator= ( RobotomyRequestForm const & a );

	void	beExecuted(Bureaucrat const & b) const;
	std::string const	getTarget() const;

private:
	std::string	const _target;
	
};

#endif