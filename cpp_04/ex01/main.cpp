#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
    int     animalNum = 4;
	Animal  *animals[animalNum];
    Cat     *cat;
    Dog     *dog;

	for(int i = 0; i < animalNum; i++)
	{
		if (!(i % 2))
		{
			animals[i] = new Cat();
			animals[i]->makeSound();
            cat = (Cat *)animals[i];
            cat->getBrain().setIdea(0, "Food food fooood..");
            std::cout << cat->getBrain().getIdea(0) << std::endl;
		}
		else
		{
			animals[i] = new Dog();
			animals[i]->makeSound();
			dog = (Dog *)animals[i];
            dog->getBrain().setIdea(0, "Play play play!");
            std::cout << dog->getBrain().getIdea(0) << std::endl;
		}
		std::cout << std::endl;
	}

	for(int i = 0; i < animalNum; i++)
		delete animals[i];
    
    return 0;
}
