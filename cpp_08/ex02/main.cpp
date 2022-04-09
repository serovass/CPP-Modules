# include <iostream>
#include "MutantStack.hpp"

int main( void )
{
    MutantStack<int> mstack;

    mstack.push(5); std::cout << "push(5)" << std::endl;
    mstack.push(17); std::cout << "push(17)" << std::endl;

    std::cout << mstack.top(); std::cout << " - mstack.top()" << std::endl;

    mstack.pop(); std::cout << "mstack.pop()" << std::endl;
    std::cout << mstack.top(); std::cout << " - top()" << std::endl;
    std::cout << mstack.size(); std::cout << " - size()" << std::endl;


    mstack.push(3); std::cout << "push(3)" << std::endl;
    mstack.push(5); std::cout << "push(5)" << std::endl;
    mstack.push(737); std::cout << "push(737)" << std::endl;
    mstack.push(0); std::cout << "push(0)" << std::endl;

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;
    std::cout << "\nfrom begin() to end():" << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

    std::stack<int> s(mstack);

    return 0;
}