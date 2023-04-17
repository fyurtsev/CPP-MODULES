#pragma once

#include "Form.hpp"
#include <iostream>



class Form;
class Bureaucrat{
    private:
        const std::string	name;
        int			grade;
    public:


/* ************************************************************************** */
/* CONSTRUCTORS                                                               */
/* ************************************************************************** */
		Bureaucrat(void);
		Bureaucrat(std::string tmp);
		Bureaucrat(std::string tmp, int num);
        Bureaucrat(int tmp);
		Bureaucrat(Bureaucrat const& tmp);

/* ************************************************************************** */
/* OPERATOR                                                                   */
/* ************************************************************************** */
        Bureaucrat& operator=(Bureaucrat const& bureaucrat);

/* ************************************************************************** */
/* GETTERS                                                                    */
/* ************************************************************************** */
        std::string getName(void) const;
        int         getGrade(void) const;


/* ************************************************************************** */
/* SETTERS                                                                    */
/* ************************************************************************** */
        void setName(std::string tmp);
        void setGrade(int tmp);

/* ************************************************************************** */
/* DESTRUCTOR                                                                 */
/* ************************************************************************** */
        ~Bureaucrat();
/* ************************************************************************** */
/* HELPERS                                                                    */
/* ************************************************************************** */
    void signForm(Form &form);
    void increment(void);
    void decrement(void);

    
    class GradeTooHighException : public std::exception
    {
    public:
        const char* what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
    public:
        const char* what() const throw();
    };
};

std::ostream& operator<<(std::ostream &os, const Bureaucrat& f);
