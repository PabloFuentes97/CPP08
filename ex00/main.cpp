#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>

int	main(void)
{
	//VECTOR
	{
		std::cout << "----------VECTOR----------" << std::endl;
		
		std::vector<int>	containerInt;

		srand(time(NULL));
		containerInt.reserve(20);
		int i = 0;
		std::cout << "[";
		while (i < 20)
		{
			containerInt.push_back(rand() % 30);
			std::cout << containerInt[i];
			i++;
			if (i < 20)
				std::cout << ", ";
		}
		std::cout << "]" << std::endl;

		int	find = rand() % 30;
		std::cout << "Number to find: " << find << std::endl;
		easyfind(containerInt, find);	
	}
	//DEQUE
	{
		std::cout << "----------DEQUE----------" << std::endl;
		
		std::deque<int>	containerInt;

		srand(time(NULL) + 1);
		int i = 0;
		std::cout << "[";
		while (i < 20)
		{
			containerInt.push_back(rand() % 30);
			std::cout << containerInt[i];
			i++;
			if (i < 20)
				std::cout << ", ";
		}
		std::cout << "]" << std::endl;

		int	find = rand() % 30;
		std::cout << "Number to find: " << find << std::endl;
		easyfind(containerInt, find);	
	}
	//LIST
	{
		std::cout << "----------LIST----------" << std::endl;
		
		std::list<int>	containerInt;

		srand(time(NULL) + 2);
		int i = 0;
		std::cout << "[";
		while (i < 20)
		{
			containerInt.push_back(rand() % 30);
			std::cout << containerInt.back();
			i++;
			if (i < 20)
				std::cout << ", ";
		}
		std::cout << "]" << std::endl;

		int	find = rand() % 30;
		std::cout << "Number to find: " << find << std::endl;
		easyfind(containerInt, find);	
	}
	return (0);
}