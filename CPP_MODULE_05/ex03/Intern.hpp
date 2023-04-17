#pragma once

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


class Intern{
    public:
        Intern();
        Intern(const Intern& I);
        Intern& operator=(const Intern& I);
        ~Intern();

        Form *makeForm(std::string formName, std::string target);
};