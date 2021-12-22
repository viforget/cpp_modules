#include "span.hpp"

Span::Span() : _N(0), _fill(0)
{
	_ar = new int[0];
	return;
}

Span::~Span()
{
	delete this->_ar;
	return;
}

Span::Span( Span const & ref) : _N(ref.size()), _fill(0)
{
	this->_N = ref.size();
	this->_fill = ref.getFill();
	this->_ar = new int[this->_N];
	for (unsigned int i = 0; i < this->_N; i++)
	{
		this->_ar[i] = i < this->_fill ? ref[i] : 0;
	}
	return;
}

Span::Span( unsigned int n ) : _N(n), _fill(0)
{
	this->_ar = new int[n];
	for (unsigned int i = 0; i < n; i++)
		this->_ar[i] = 0;
	return;
}

void Span::operator=(Span const & ref)
{
	this->_N = ref.size();
	this->_fill = ref.getFill();
	delete this->_ar;
	this->_ar = new int[this->_N];
	for (unsigned int i = 0; i < this->_N; i++)
	{
		this->_ar[i] = i < this->_fill ? ref[i] : 0;
	}
	return;
}

int	Span::operator[](unsigned int i) const
{
	if (i >= this->_fill)
		throw(std::out_of_range("out of range"));
	return (this->_ar[i]);
}

void	Span::addNumber( int nb )
{
	if (this->_fill >= this->_N)
	{
		this->_fill = this->_N;
		throw(std::out_of_range("Span is full"));
	}
	this->_ar[this->_fill] = nb;
	this->_fill++;
	return;
}

unsigned int	Span::size() const
{
	return (this->_N);
}

unsigned int	Span::getFill() const
{
	return (this->_fill);
}

int				Span::shortestSpan()
{
	if (this->_fill <= 1)
		throw(std::length_error("Span is too short"));
	int gap = abs(this->_ar[0] - this->_ar[1]);
	for (unsigned int i = 0; i < this->_fill; i++)
	{
		for (unsigned int j = i + 1; j < this->_fill; j++)
		{
			gap = gap > abs(this->_ar[i] - this->_ar[j]) ? abs(this->_ar[i] - this->_ar[j]) : gap;
		}
	}
	return (gap);
}

int				Span::longestSpan()
{
	if (this->_fill <= 1)
		throw(std::length_error("Span is too short"));
	int gap = abs(this->_ar[0] - this->_ar[1]);
	for (unsigned int i = 0; i < this->_fill; i++)
	{
		for (unsigned int j = i + 1; j < this->_fill; j++)
		{
			gap = gap < abs(this->_ar[i] - this->_ar[j]) ? abs(this->_ar[i] - this->_ar[j]) : gap;
		}
	}
	return (gap);
}
