#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
class	Form;
#include "Form.hpp"

class Bureaucrat {

public:
	Bureaucrat();
	Bureaucrat( Bureaucrat & cpy );
	Bureaucrat( std::string name, int grade );
	Bureaucrat( std::string name );
	Bureaucrat( int grade );
	~Bureaucrat();

	void	operator= ( Bureaucrat const & a );
	
	std::string	getName() const;
	int			getGrade() const;
	void		incGrade();
	void		decGrade();

	class	GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	class	GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	void	signForm(Form & form);
	void	executeForm(Form const & form);

private:
	std::string	const	_name;
	int			_grade;

};

std::ostream& operator<<( std::ostream &flux, Bureaucrat const& br );

#endif