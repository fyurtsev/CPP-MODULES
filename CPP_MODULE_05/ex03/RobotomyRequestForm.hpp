#pragma once

#include "Form.hpp"
#include "Bureaucrat.hpp"

class AForm;
class RobotomyRequestForm : public Form{
    private:
        std::string target;

    public:

        void execute(Bureaucrat const & form) const;

        RobotomyRequestForm(void);
        RobotomyRequestForm(std::string _target);
        RobotomyRequestForm(RobotomyRequestForm const& tmp);
        RobotomyRequestForm& operator=(RobotomyRequestForm const& tmp);
        ~RobotomyRequestForm(void);
};