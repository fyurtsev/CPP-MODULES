#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): target("Unnamed target")
{ 
    setGrade(145);
    setEvoGrade(137);
    std::cout << "Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target): target(_target)
{
    setGrade(145);
    setEvoGrade(137);
    std::cout << "String constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& tmp)
{
    *this = tmp;
    std::cout << "Copy constructor called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& tmp)
{
    this->setEvoGrade(tmp.getEvoGrade());
    this->setGrade(tmp.getGrade());
    this->setName(tmp.getName());
    this->setIsSgined(tmp.getIsSgined());
    this->target = tmp.target; 
    std::cout << "Cop assignment operator called" << std::endl;
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & form) const
{
    if(!getIsSgined())
        throw NotSignedException();
    if(form.getGrade() > getEvoGrade() || form.getGrade() > getGrade())
        throw GradeTooLowException();
    std::ofstream out;
    std::string ascii_trees = "       _-_\n"
                              "    /~~   ~~\\ \n"
                              " /~~         ~~\\ \n"
                              "{               }\\ \n"
                              " \\  _-     -_  / \n"
                              "   ~  \\ //  ~\n"
                              "_- -   | | _- _\n"
                              "  _ -  | |   -_\n"
                              "      // \\\\ \n";
    out.open(target + "_shrubbery", std::ofstream::out | std::ofstream::trunc);
    if(!out)
        throw FileErrorException();
    out << ascii_trees;
    out.close();
    std::cout << getName() << " _shrubbery file created." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) { std::cout << "Destructor called" << std::endl; }
