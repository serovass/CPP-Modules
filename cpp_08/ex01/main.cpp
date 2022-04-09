#include <iostream>
#include "Span.hpp"

int main()
{
	Span span;

    //-------------------------------------------------------------
    std::cout << "--- test 1 ---" << std::endl;
	try
	{
        span = Span(4);

		span.addNumber(10); std::cout << "10 is adeed" << std::endl;
		span.addNumber(0); std::cout << " 0 is adeed" << std::endl;
		span.addNumber(1); std::cout << " 1 is adeed" << std::endl;
        span.addNumber(5); std::cout << " 5 is adeed" << std::endl;
		span.addNumber(3); std::cout << " 3 is adeed" << std::endl;// exeption
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
    std::cout << std::endl;

    //-------------------------------------------------------------

    std::cout << "--- test 2 ---" << std::endl;
	try
	{
        span = Span(4);

		span.addNumber(10); std::cout << "10 is adeed" << std::endl;
		span.addNumber(0); std::cout << " 0 is adeed" << std::endl;
		span.addNumber(1); std::cout << " 1 is adeed" << std::endl;
        span.addNumber(5); std::cout << " 5 is adeed" << std::endl;

        std::cout << "shortest Span: " << span.shortestSpan() << std::endl;
		std::cout << "longest Span: " << span.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
    std::cout << std::endl;

    //-------------------------------------------------------------
    std::cout << "--- test 3 ---" << std::endl;
	try
	{
        span = Span(10000);

		span.addNumber(1); std::cout << " 1 is adeed" << std::endl;

		std::cout << span.shortestSpan() << std::endl;
		std::cout << span.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
    std::cout << std::endl;

	//-------------------------------------------------------------
    std::cout << "--- test 4 ---" << std::endl;
	try
	{
        span = Span(10000);
		std::vector<int> intVector(100);

		for(int i = 0; i < 100; i++)
			intVector[i] = std::rand();

		span.addNumbers(intVector.begin(), intVector.end());
		std::cout << " 100 adeed" << std::endl;

		std::cout << span.shortestSpan() << std::endl;
		std::cout << span.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
    std::cout << std::endl;

	return 0;
}

