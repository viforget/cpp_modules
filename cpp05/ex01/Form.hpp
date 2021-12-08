#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
class	Bureaucrat;
#include "Bureaucrat.hpp"

class	Form {

public:
	Form( void );
	~Form( void );
	Form( Form const & cpy );
	Form( std::string const & name, int grade );
	Form( std::string const & name );

	void	operator= ( Bureaucrat const & a );

	std::string const	getName() const;
	bool				getSign() const;
	int 				getGrade() const;

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

	void	beSigned(Bureaucrat const & b);

private:
	std::string const	_name;
	bool				_sign;
	int const			_grade;

};

std::ostream& operator<<( std::ostream &flux, Form const& form );

#endif