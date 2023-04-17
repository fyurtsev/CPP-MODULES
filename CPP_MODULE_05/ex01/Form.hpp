#pragma once

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;
class Form{
    private:
        const std::string name;
        bool isSigned;
        int grade;
        const int evoGrade;
    public:

/* ************************************************************************** */
/* CONSTRUCTORS                                                               */
/* ************************************************************************** */

        Form();
        Form(std::string nametmp);
        Form(int gradetmp);
        Form(int gradetmp, int evotmp);
        Form(std::string nametmp, int gradetmp, int evotmp);
        Form(Form const& tmp);

/* ************************************************************************** */
/* OPERATOR                                                                   */
/* ************************************************************************** */

        Form& operator=(Form const& tmp);


/* ************************************************************************** */
/* GETTERS                                                                    */
/* ************************************************************************** */

        std::string getName() const;
        bool        getIsSgined() const;
        int         getGrade() const;
        int         getEvoGrade() const;

/* ************************************************************************** */
/* SETTERS                                                                    */
/* ************************************************************************** */

        void        setName(std::string nameTmp);
        void        setIsSgined(bool signedTmp);
        void        setGrade(int gradeTmp);
        void        setEvoGrade(int evoGradeTmp);

/* ************************************************************************** */
/* DESTRUCTOR                                                                 */
/* ************************************************************************** */

        ~Form();
    
/* ************************************************************************** */
/* HELPERS                                                                    */
/* ************************************************************************** */

    void beSigned(Bureaucrat& b);

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

        std::ostream& operator<<(std::ostream& os, const Form& f);
