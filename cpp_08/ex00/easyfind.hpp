#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iterator>

template <typename T>
typename T::iterator	easyfind( T &container, int target )
{
	typename T::iterator	result = find(container.begin(), container.end(), target);
	
	if (result == container.end())
		throw std::overflow_error("no occurrence is found");

	return result;
}

#endif


