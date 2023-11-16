#pragma once
#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
	private:
		std::vector<int> _nums;
		int				_max;
	public:
		Span();
		Span(unsigned int n);
		Span(Span const &src);
		Span &operator=(Span const &rhs);
		~Span();
		void	addNumber(int n);
		void	addNumber(std::vector<int>::iterator it, std::vector<int>::iterator ite);
		class	NoSpanException: public std::exception
		{
			public:
				virtual const char	*what() const throw ();
		};
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
};

#endif