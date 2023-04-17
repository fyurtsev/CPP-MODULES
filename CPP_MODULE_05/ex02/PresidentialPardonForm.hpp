#pragma once

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class AForm;
class PresidentialPardonForm : public AForm{
    private:
        std::string target;

    public:

        void execute(Bureaucrat const & form) const;

        PresidentialPardonForm(void);
        PresidentialPardonForm(std::string _target);
        PresidentialPardonForm(PresidentialPardonForm const& tmp);
        PresidentialPardonForm& operator=(PresidentialPardonForm const& tmp);
        ~PresidentialPardonForm(void);
};