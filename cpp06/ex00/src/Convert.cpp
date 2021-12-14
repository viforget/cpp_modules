#include "Convert.hpp"

Convert::Convert() : _i(0), _c(0), _f(0), _d(0), _is_char(0), _is_int(1)
{
	return;
}

Convert::~Convert()
{
	return;
}

Convert::Convert( Convert const & src ) : _i(src.getInt()), _c(src.getChar()), _f(src.getFloat()), _d(src.getDouble()), _is_char(getIsChar()), _is_int(getIsInt())
{
	return;
}

void	Convert::operator= ( Convert const & a )
{
	this->_i = a.getInt();
	this->_c = a.getChar();
	this->_f = a.getFloat();
	this->_d = a.getDouble();
}

Convert::Convert(std::string str)
{
	int		i = std::atoi(str.c_str());
	double	d = std::atof(str.c_str());

	if	(i != 0)
	{
		this->_i = i;
		this->_is_int = 1;
		if (isprint(i))
		{
			this->_c = static_cast<int>(i);
			this->_is_char = 1;
		}
		else
		{
			this->_c = 0;
			this->_is_char = 0;
		}
		this->_f = static_cast<float>(d);
		this->_d = static_cast<double>(d);
	}
	else if (str.length() == 1 && isprint(str[0]) && str[0] != '0')
	{
		this->_c = str[0];
		this->_is_char = 1;
		this->_i = static_cast<int>(str[0]);
		this->_is_int = 1;
		this->_f = static_cast<float>(str[0]);
		this->_d = static_cast<double>(str[0]);
	}
	else if (d != 0)
	{
		this->_i = 0;
		this->_c = 0;
		this->_is_char = 0;
		this->_is_int = 0;
		this->_f = static_cast<float>(d);
		this->_d = static_cast<double>(d);
	}
	else
	{
		this->_i = 0;
		this->_c = 0;
		this->_is_char = 0;
		this->_is_int = 1;
		this->_f = static_cast<float>(d);
		this->_d = static_cast<double>(d);
	}
}

int		Convert::getInt() const
{
	return (this->_i);
}

char	Convert::getChar() const
{
	return (this->_c);
}

float	Convert::getFloat() const
{
	return (this->_f);
}

double	Convert::getDouble() const
{
	return (this->_d);
}

bool	Convert::getIsChar() const
{
	return (this->_is_char);
}

bool	Convert::getIsInt() const
{
	return (this->_is_int);
}

void	Convert::printInt() const
{
	std::cout << this->_i << std::endl;
}

void	Convert::printChar() const
{
	std::cout << this->_c << std::endl;
}

void	Convert::printFloat() const
{
	if (fmod(this->_f, 1) == 0)
		std::cout << std::fixed << std::setprecision(1) << this->_f << "f" << std::endl;
	else
		std::cout << this->_f << "f" << std::endl;
}

void	Convert::printDouble() const
{
	if (fmod(this->_f, 1) == 0)
		std::cout << std::fixed << std::setprecision(1) << this->_d << std::endl;
	else
		std::cout << this->_d << std::endl;
}
