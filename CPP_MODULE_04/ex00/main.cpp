#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
	std::cout << "-------------Animal Test-------------" << std::endl;
	const Animal* meta = new Animal();
	const Animal* d = new Dog();
	const Animal* c = new Cat();

	std::cout << std::endl;
	std::cout << "Type : " << meta->getType() << std::endl;
	std::cout << "Type : " << d->getType() << std::endl;
	std::cout << "Type : " << c->getType() << std::endl;

	std::cout << std::endl;
	c->makeSound();
	d->makeSound();
	meta->makeSound();

	std::cout << std::endl;
	delete meta;
	delete d;
	delete c;
	
	std::cout << std::endl;
	std::cout << "-----------WrongAnimal Test-----------" << std::endl;
	const WrongAnimal* wa = new WrongAnimal();
	const WrongAnimal* wc = new WrongCat();

	std::cout << std::endl;
	std::cout << "Type : " << wa->getType() << std::endl;
	std::cout << "Type : " << wc->getType() << std::endl;

	std::cout << std::endl;
	wa->makeSound();
	wc->makeSound();

	std::cout << std::endl;
	delete wa;
	delete wc;

	// system("leaks animals"); // Bellek sızıntısı test
	return 0; 
}
