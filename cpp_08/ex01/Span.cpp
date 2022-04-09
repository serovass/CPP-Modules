#include <algorithm>
#include <cstdlib>
#include <iterator>
#include "Span.hpp"


Span::Span( void ): N(0)
{
}

Span::Span( unsigned int N ): N(N), storage(0)
{
}

Span::Span( Span const & src )
{
	*this = src;
	return;
}

Span::~Span( void )
{
}

Span &	Span::operator=( Span const & rhs )
{
	if (this == &rhs)
		return *this;
	this->N = rhs.N;
	this->storage = rhs.storage;

	return *this;
}

//-----------------------------------------------------------
void	Span::addNumber( int number )
{
	if (storage.size() == N)
		throw std::out_of_range("Storage is full");

	storage.push_back(number);
}

//------------------
int	Span::shortestSpan( void ) const
{
	std::vector<int>    tmp = storage;

	std::vector<int>::iterator	it;
	if (storage.size() < 2)
		throw std::logic_error("There are less than 2 stored numbers");

	sort(tmp.begin(), tmp.end());

	return *(tmp.begin() + 1) - *tmp.begin();
}

//------------------
int	Span::longestSpan( void ) const
{
	std::vector<int>	tmp = storage;

	if (storage.size() < 2)
		throw std::logic_error("There are less than 2 stored numbers");

	sort(tmp.begin(), tmp.end());
	return *(tmp.end() - 1) - *tmp.begin();
}

//-------------------

void Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (begin > end)
		throw std::range_error("Trying to add wrong range");
	if ((long)(end - begin) <= (long)N - (long)storage.size())
		storage.insert(storage.end(), begin, end);
	else
		throw std::out_of_range("Storage is full");
}

