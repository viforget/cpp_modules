#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("noName"), _grade(150)
{
	return;
}

Bureaucrat::Bureaucrat( Bureaucrat & cpy ) : _name(cpy.getName()), _grade(cpy.getGrade())
{
	return;
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name)
{
	this->_grade = 150;
	if (grade > 150)
		throw(Bureaucrat::GradeTooLowException());
	else if (grade < 1)
		throw(Bureaucrat::GradeTooHighException());
	else
		this->_grade = grade;
	return;
}

Bureaucrat::Bureaucrat( std::string name ) : _name(name)
{
	this->_grade = 150;
	return;
}

Bureaucrat::Bureaucrat( int grade ) : _name("noName")
{
	this->_grade = 150;
	if (grade > 150)
		throw(Bureaucrat::GradeTooLowException());
	else if (grade < 1)
		throw(Bureaucrat::GradeTooHighException());
	else
		this->_grade = grade;
	return;
}

Bureaucrat::~Bureaucrat()
{
	return;
}

void Bureaucrat::operator= ( Bureaucrat const &a )
{
	this->_grade = a.getGrade();
}

std::string		Bureaucrat::getName() const
{
	return (this->_name);
}

int				 Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void		Bureaucrat::incGrade()
{
	if (this->_grade - 1 < 1)
		throw (Bureaucrat::GradeTooHighException());
	else
		this->_grade--;
}

void		Bureaucrat::decGrade()
{
	if (this->_grade + 1 > 150)
		throw (Bureaucrat::GradeTooLowException());
	else
		this->_grade++;
}

std::ostream& operator<<( std::ostream &flux, Bureaucrat const& br )
{
    flux << br.getName() << ", bureaucrat grade " << br.getGrade() << ".";
	return flux;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("the grade is too high, it cannot be under 1");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("the grade is too low, it cannot be over 150");
}

void		Bureaucrat::signForm( Form & form )
{
	try
	{
		form.beSigned(*this);
	}
	catch (std::exception & e)
	{
		std::cout << this->_name << " cannot sign because " << e.what() << std::endl;
		return;
	}
	std::cout << this->_name << " signs " << form.getName() << std::endl;

}

void	Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.beExecuted(*this);

	}
	catch (std::exception & e)
	{
		std::cout << this->_name << " cannot execute "<< form.getName() << " because " << e.what() << std::endl;
		return;
	}
	std::cout << this->_name << " executed " << form.getName() << std::endl;
}
