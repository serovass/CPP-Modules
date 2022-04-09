#include <iostream>
#include <string>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base *generate(void)
{
	srand((unsigned)time(0));

	switch (std::rand() % 3)
	{
		case 1:
			std::cout << "A class is generated" << std::endl;
			return new A;
		case 2:
			std::cout << "B class is generated" << std::endl;
			return new B;
		default:
			std::cout << "C class is generated" << std::endl;
			return new C;
	}
	return nullptr;
}

//---------------------------------------
void identify(Base *p)
{
	if (dynamic_cast <A *> (p))
		std::cout << "p: A" << std::endl;
	else if (dynamic_cast <B *> (p))
		std::cout << "p: B" << std::endl;
	else if (dynamic_cast <C *> (p))
		std::cout << "p: C" << std::endl;
}

//-----------------------------------------
void identify(Base &p)
{
	try
	{
		A &a = dynamic_cast <A &> (p);
		std::cout << "p: A" << std::endl;
		(void)a;
		return;
	}
	catch (std::bad_cast &e)
	{
	}

	try
	{
		B &b = dynamic_cast <B &> (p);
		std::cout << "p: B" << std::endl;
		(void)b;
		return;
	}
	catch (std::bad_cast &e)
	{
	}

	try
	{
		C &c = dynamic_cast <C &> (p);
		std::cout << "p: C" << std::endl;
		(void)c;
		return;
	}
	catch (std::bad_cast &e)
	{
	}
}

//-----------------------------------------
int main()
{
	Base *p;

	p = generate();
	identify(p);
	identify(*p);

	delete p;

	return 0;
}
