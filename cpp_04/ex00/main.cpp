#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
    Animal* meta = new Animal();
    Animal* j = new Dog();
    Animal* i = new Cat();

    std::cout << std::endl;
    std::cout << j->getType() << ": " ;
    j->makeSound();
    std::cout << i->getType() << ": " ;
    i->makeSound();
    std::cout << meta->getType() << ": " ;
    meta->makeSound();
    std::cout << std::endl;

    delete i;
    delete j;
    delete meta;
//----------------------------------------
    std::cout << std::endl;

    WrongAnimal* metaW = new WrongAnimal();
    WrongAnimal* iW = new WrongCat();

    std::cout << std::endl;
    std::cout << iW->getType() << ": " ;
    iW->makeSound();
    std::cout << metaW->getType() << ": " ;
    metaW->makeSound();
    std::cout << std::endl;

    delete iW;
    delete metaW;
    
    return 0;
}
