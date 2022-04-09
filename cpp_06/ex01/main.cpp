#include <iostream>
#include <string>

struct Data
{
	int i;
	double d;
	std::string str;
};

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast <uintptr_t> (ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast <Data *> (raw);
}

//----------------------------------------------
int main()
{
	Data data;

	data.i = 5;
	data.d = 23.6;
	data.str = "abcd";

	std::cout << "data address: " << &data << std::endl;
	std::cout << "int i: " << data.i << std::endl;
	std::cout << "double d: " << data.d << std::endl;
	std::cout << "string str: " << data.str << std::endl;

	uintptr_t raw = serialize(&data);
	Data* newData = deserialize(raw);
	std::cout << std::endl;
	
	std::cout << "newData address: " << newData << std::endl;
	std::cout << "int i: " << newData->i << std::endl;
	std::cout << "double d: " << newData->d << std::endl;
	std::cout << "string str: " << newData->str << std::endl;




	return 0;
}

