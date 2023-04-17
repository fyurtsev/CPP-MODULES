#pragma once

#include "Bureaucrat.hpp"
#include <iostream>
#include <fstream>

class Bureaucrat;
class AForm{
	private:
		const std::string	name;
		bool 				isSigned;
		int					grade;
		const int			evoGrade;
	public:

/* ************************************************************************** */
/* CONSTRUCTORS                                                               */
/* ************************************************************************** */

		AForm();
		AForm(std::string nametmp);
		AForm(int gradetmp);
		AForm(int gradetmp, int evotmp);
		AForm(std::string nametmp, int gradetmp, int evotmp);
		AForm(AForm const& tmp);

/* ************************************************************************** */
/* OPERATOR                                                                   */
/* ************************************************************************** */

	

		AForm& operator=(AForm const& tmp);
		
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

		virtual ~AForm();
	
/* ************************************************************************** */
/* HELPERS                                                                    */
/* ************************************************************************** */

	void beSigned(Bureaucrat& b);
	virtual void execute(Bureaucrat const & executor) const = 0;

	class GradeTooHighException : public std::exception
	{
		public:
			const char* what() const throw();
	};

	class NotSignedException : public std::exception
	{
		public:
			const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
			const char* what() const throw();
	};

	class FileErrorException : public std::exception
	{
		public:
			const char* what() const throw();
	};

};

std::ostream& operator<<(std::ostream &o, const AForm& f);
