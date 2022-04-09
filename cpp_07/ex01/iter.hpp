#ifndef ITER_HPP
#define ITER_HPP


template <typename T>
void iter(T *array, unsigned int arraySize, void (*func)(T const &elem))
{
	for (unsigned int i = 0; i < arraySize; i++)
		(*func)(array[i]);

	return;
}


#endif