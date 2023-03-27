#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
	std::cout << "-------------Brain Test-------------" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;
	delete j;
	delete i;

	std::cout << std::endl;

	std::cout << "-----------Deep copy Test-----------" << std::endl;
	Dog d1;
	Dog d2 = d1;
	
	d1.getBrain()->setIdea(0, "mind");
	d1.getBrain()->setIdea(1, "kes");
	
	std::cout << std::endl;
	for (int index = 0; index < 100; index++)
		std::cout << d1.getBrain()->getIdea(index) << " ";

	std::cout << std::endl << std::endl;

	for (int index = 0; index < 100; index++)
		std::cout << d2.getBrain()->getIdea(index) << " ";
	std::cout << std::endl << std::endl;
	
	return 0;
}
