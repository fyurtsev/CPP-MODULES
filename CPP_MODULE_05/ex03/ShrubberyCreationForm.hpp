#pragma once

#include "Form.hpp"
#include "Bureaucrat.hpp"

class AForm;
class ShrubberyCreationForm : public Form{
    private:
        std::string target;

    public:

        void execute(Bureaucrat const & form)const;

        ShrubberyCreationForm(void);
        ShrubberyCreationForm(std::string _target);
        ShrubberyCreationForm(ShrubberyCreationForm const& tmp);
        ShrubberyCreationForm& operator=(ShrubberyCreationForm const& tmp);
        ~ShrubberyCreationForm(void);
};