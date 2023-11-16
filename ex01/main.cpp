#include "Span.hpp"

int	main(void)
{
	//SUBJECT EXAMPLE
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " <<sp.longestSpan() << std::endl;
	}
	//EMPTY SPAN
	{
		Span sp;
		try
		{
			sp.shortestSpan();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}
	//SPAN N = 1
	{
		Span sp = Span(5);

		sp.addNumber(3);
		try
		{
			sp.shortestSpan();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	//BIGGER RANGE
	{
		Span sp = Span(5);
		sp.addNumber(1000);
		sp.addNumber(-30);
		sp.addNumber(-50);
		sp.addNumber(210);
		sp.addNumber(91);
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " <<sp.longestSpan() << std::endl;
	}
	//MAX = 100000, N = 20000
	{
		Span sp = Span(100000);
		std::vector<int> v;
		srand(time(NULL));
		for (int i = 0; i < 20000; i++)
		{
			v.push_back(rand());
			i++;
		}
		sp.addNumber(v.begin(), v.end());
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	}
	return (0);
}
