#include "Intern.hpp"

Intern::Intern(){ std::cout << "Default constructor called" << std::endl; }

Intern::Intern(const Intern& I)
{ 
    std::cout << "Copy constructor called" << std::endl; 
    *this = I;
}

Intern::~Intern(){ std::cout << "Destructor called" << std::endl; }Intern& Intern::operator=(const Intern& I)
{
    (void)I;
    std::cout << "Copy assignment called" << std::endl;
    return(*this);
}

Form *Intern::makeForm(std::string formName, std::string target)
{
    int i = 0;
    std::cout << "Intern creates " << formName << std::endl;
    std::string fName[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    
    while(formName != fName[i]  && i < 3)
        i++;
    switch(i)
    {
		case 0: return new PresidentialPardonForm(target);
		case 1: return new RobotomyRequestForm(target);
		case 2: return new ShrubberyCreationForm(target);
    }
    std::cout << "There is no form with this name." << std::endl;
    return(NULL);
}