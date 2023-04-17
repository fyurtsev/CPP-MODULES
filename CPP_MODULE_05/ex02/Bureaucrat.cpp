#include "Bureaucrat.hpp"
#include "AForm.hpp"


/* ************************************************************************** */
/* CONSTRUCTORS                                                               */
/* ************************************************************************** */

Bureaucrat::Bureaucrat(void): name("unnamed Bureaucrat"), grade(150)
{ std::cout << "Default constructor called" << std::endl; }

Bureaucrat::Bureaucrat(int tmp): name("unnamed Bureaucrat"), grade(tmp)
{
    if (tmp > 150 || tmp < 1)
        {
            if(tmp > 150)
                throw Bureaucrat::GradeTooLowException();
            else
                throw Bureaucrat::GradeTooHighException();
        }
    else
        std::cout << "Int constructor called" << std::endl; 
}

Bureaucrat::Bureaucrat(std::string tmp, int num): name(tmp), grade(num)
{ 
    if (num > 150 || num < 1)
        {
            if(num > 150)
                throw Bureaucrat::GradeTooLowException();
            else
                throw Bureaucrat::GradeTooHighException();
        }
    else
        std::cout << "Double constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string tmp): name(tmp), grade(150)
{ std::cout << "String constructor called" << std::endl; }

Bureaucrat::Bureaucrat(Bureaucrat const& tmp)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = tmp;
}

/* ************************************************************************** */
/* OPERATOR                                                                   */
/* ************************************************************************** */

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& tmp)
{
    this->setName(tmp.getName());
    this->setGrade(tmp.getGrade());
    return *this;
}

/* ************************************************************************** */
/* GETTERS                                                                    */
/* ************************************************************************** */

int Bureaucrat::getGrade(void) const
{
    return this->grade;
}

std::string Bureaucrat::getName(void) const
{
    return this->name;
}

/* ************************************************************************** */
/* SETTERS                                                                    */
/* ************************************************************************** */

void Bureaucrat::setGrade(int tmp)
{

        if(tmp > 150 || tmp < 1)
        {
            if(tmp > 150)
                throw Bureaucrat::GradeTooLowException();
            else
                throw Bureaucrat::GradeTooHighException();
        }
        else
            this->grade = tmp;
}

void	Bureaucrat::setName(std::string _n) { const_cast<std::string&>(this->name) = const_cast<std::string&>(_n); }

/* ************************************************************************** */
/* DESTRUCTOR                                                                 */
/* ************************************************************************** */

Bureaucrat::~Bureaucrat(){ std::cout << "Destructor called" << std::endl; }

/* ************************************************************************** */
/* HELPERS                                                                    */
/* ************************************************************************** */

void Bureaucrat::increment(void) { 
    try{
        setGrade(getGrade() - 1);
    }
    catch(std::exception& e){
        std::cerr << e.what() << std::endl;

    }
}
        
void Bureaucrat::decrement(void) {
    try{
        setGrade(getGrade() + 1);
    }
    catch(std::exception& e){
        std::cerr << e.what() << std::endl;

    }
}

void Bureaucrat::executeForm(AForm &AForm){
    AForm.execute(*this);
}

void Bureaucrat::signAForm(AForm &AForm){
    try
    {
        AForm.beSigned(*this);
        std::cout << getName() << " signed " << AForm.getName() << "." << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << getName() << " couldn't sign " << AForm.getName() << " because " << e.what() << std::endl;
    }
    
}

std::ostream& operator<<(std::ostream &os, const Bureaucrat& f)
{
    os << f.getName() << ", breaucrat grade " << f.getGrade() << std::endl;
    return os;
}

const char* Bureaucrat::GradeTooHighException::what(void) const throw() { return "Your grade too high."; }

const char* Bureaucrat::GradeTooLowException::what(void) const throw() { return "Your grade too low."; }
