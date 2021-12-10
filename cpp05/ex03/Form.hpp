#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
class	Bureaucrat;
#include "Bureaucrat.hpp"

class	Form {

public:
	Form( void );
	virtual ~Form( void );
	Form( Form const & cpy );
	Form( std::string const & name, int grade );
	Form( std::string const & name, int grade, int grade_ex);
	Form( std::string const & name );

	void	operator= ( Bureaucrat const & a );

	std::string const	getName() const;
	bool				getSign() const;
	int 				getGrade() const;
	int 				getGradeEx() const;

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

	class	NoExecutionExeption : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	class	NoSignatureExeption : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	void			beSigned(Bureaucrat const & b);
	virtual void	beExecuted(Bureaucrat const & b) const;

protected:
	std::string const	_name;
	bool				_sign;
	int const			_grade;
	int const			_grade_ex;

};

std::ostream& operator<<( std::ostream &flux, Form const& form );

#endif