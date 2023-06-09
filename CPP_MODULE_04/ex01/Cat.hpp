#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
  Brain* _brain;
public:
    /* default constructor */
    Cat();

    /* copy constructor */
    Cat(Cat const& src);

    /* copy assignment operator */
    Cat& operator=(Cat const& cat);

    /* destructor */
    virtual ~Cat();

    /* getters */
    std::string const& getIdea(int i) const;    

    /* setter */
    void setIdea(int i, std::string const& idea);
    Brain* getBrain(void) const;
    /* public methods */
    void printIdeas() const;
    virtual void makeSound() const;

};

#endif