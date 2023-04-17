#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): target("Unnamed target")
{ 
    setGrade(25);
    setEvoGrade(5);
    std::cout << "Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string _target): target(_target)
{
    setGrade(25);
    setEvoGrade(5);
    std::cout << "String constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& tmp)
{
    *this = tmp;
    std::cout << "Copy constructor called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const& tmp)
{
    this->setEvoGrade(tmp.getEvoGrade());
    this->setGrade(tmp.getGrade());
    this->setName(tmp.getName());
    this->setIsSgined(tmp.getIsSgined());
    this->target = tmp.target; 
    std::cout << "Cop assignment operator called" << std::endl;
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & form) const
{
    if(!getIsSgined())
        throw NotSignedException();
    if(form.getGrade() > getEvoGrade() || form.getGrade() > getGrade())
        throw GradeTooLowException();
    std::cout << getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void) { std::cout << "Destructor called" << std::endl; }