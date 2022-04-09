#include <iostream>
#include "Bureaucrat.hpp"

int		main(void)
{
    Bureaucrat *tom;
    Bureaucrat *mark;

    try
	{
        tom = new Bureaucrat("Tom", 147);
        mark = new Bureaucrat("Mark", 6);

        for (int i = 0; i < 5; ++i)
        {
            std::cout << tom->getName() << " grade: " 
                << tom->getGrade() << std::endl;

            std::cout << mark->getName() << " grade: " 
                << mark->getGrade() << std::endl;

            mark->incrementGrade();
            tom->decrementGrade();
        }
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}


    
            
    delete tom;
    delete mark;

    return 0;
}
