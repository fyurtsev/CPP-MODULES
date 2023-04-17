#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): target("Unnamed target")
{ 
    setGrade(72);
    setEvoGrade(45);
    std::cout << "Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string _target): target(_target)
{
    setGrade(72);
    setEvoGrade(45);
    std::cout << "String constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& tmp)
{
    *this = tmp;
    std::cout << "Copy constructor called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& tmp)
{
    this->setEvoGrade(tmp.getEvoGrade());
    this->setGrade(tmp.getGrade());
    this->setName(tmp.getName());
    this->setIsSgined(tmp.getIsSgined());
    this->target = tmp.target; 
    std::cout << "Cop assignment operator called" << std::endl;
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & form) const
{
    if(!getIsSgined())
        throw NotSignedException();
    if(form.getGrade() > getEvoGrade() || form.getGrade() > getGrade())
        throw GradeTooLowException();
    srand(time(NULL));
    std::cout << "Drrrrrrr..." << std::endl;
    if(rand() % 2)
        std::cout << getName() << " has been robotomized succesfully 50% of the time." << std::endl;
    else
        std::cout << getName() << " has been failed robotomize." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void) { std::cout << "Destructor called" << std::endl; }