#include "Span.hpp"

Span::Span() : _max(0)
{

}

Span::Span(unsigned int n): _max(n)
{

}
Span::~Span()
{
	
}

Span::Span(Span const &src)
{
	*this = src;
}

Span &Span::operator=(Span const &rhs)
{
	this->_nums.clear();
	this->_nums = rhs._nums;
	return (*this);
}

void	Span::addNumber(int n)
{
	if (this->_nums.size() < this->_max)
		this->_nums.push_back(n);
}

void	Span::addNumber(std::vector<int>::iterator it, std::vector<int>::iterator ite)
{
	while (it != ite && this->_nums.size() < this->_max)
	{
		this->_nums.push_back(*it);
		it++;
	}
}

unsigned int	Span::shortestSpan()
{
	if (this->_nums.empty() || this->_nums.size() <= 1)
		throw (Span::NoSpanException());
	
	std::vector<int>	aux = this->_nums;

	sort(aux.begin(), aux.end());
	int	shortest = abs(aux[0] - aux[1]);
	int	span;
	size_t size = aux.size();
	for (int i = 1, j = i + 1; i < size - 1; i++, j++)
	{
		span = abs(aux[i] - aux[j]);
		if (span < shortest)
			shortest = span;
	}
	return (shortest);
}

unsigned int	Span::longestSpan()
{
	if (this->_nums.empty() || this->_nums.size() <= 1)
		throw (Span::NoSpanException());
	
	int	max = *(max_element(this->_nums.begin(), this->_nums.end()));
	int	min = *(min_element(this->_nums.begin(), this->_nums.end()));
	return (max - min);
}

const char	*Span::NoSpanException::what() const throw ()
{
	return ("Invalid number of elements for span");
}
