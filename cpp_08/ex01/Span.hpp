#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>


class Span
{

public:

	Span(void);
	Span(unsigned int N);
	Span(const Span &src);
	~Span(void);

	Span	&operator=( const Span &rhs );

	void	addNumber(int number);
	void	addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	//fill your Span using a range of iterators

    int		shortestSpan( void ) const;
	int		longestSpan( void ) const;


private:

	unsigned int		N;
	std::vector<int>	storage;

};

#endif