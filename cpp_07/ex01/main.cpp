#include <iostream>
#include "iter.hpp"

template <typename T>
void diplayElem(T const &elem)
{
	std::cout << elem << " ";
}

int main(void)
{
	int arrI[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	float arrF[10] = {0.0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9};

	iter(arrI, sizeof( arrI ) / sizeof( arrI[0] ), &diplayElem);
	std::cout << std::endl;

	iter(arrF, sizeof( arrF ) / sizeof( arrF[0] ), &diplayElem);
    std::cout << std::endl;

	return 0;
}
