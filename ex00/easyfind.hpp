#pragma once

#ifndef EASYFIND_HPP

#define EASYFIND_HPP
#include <algorithm>
#include <iterator>
#include <iostream>

template<typename T>
int	easyfind(T container, int num)
{	
	typename T::iterator	found = std::find(container.begin(), container.end(), num);
	
	if (found == container.end())
	{
		std::cout << "Number not found!" << std::endl;
		return (0);
	}
	std::cout << "Number found: " << *found << " at position: "
				<< std::distance(container.begin(), found) << std::endl;
	return (1);
}

#endif