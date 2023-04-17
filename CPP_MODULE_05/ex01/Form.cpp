#include "Form.hpp"
#include "Bureaucrat.hpp"

/* ************************************************************************** */
/* CONSTRUCTORS                                                               */
/* ************************************************************************** */

	Form::Form(): name("unnamed form name"), isSigned(0), grade(0), evoGrade(0)
	{ std::cout << "Default constructor called" << std::endl; }
	
	Form::Form(std::string nametmp): name(nametmp), isSigned(0), grade(0), evoGrade(0)
	{ std::cout << "String constructor called" << std::endl; }
	
	Form::Form(int gradetmp): name("unnamed form name"), isSigned(0), grade(gradetmp), evoGrade(0)
	{ std::cout << "Int constructor called" << std::endl; }
	
	Form::Form(int gradetmp, int evotmp): name("unnamed form name"), isSigned(0), grade(gradetmp), evoGrade(evotmp)
	{ std::cout << "Double int constructor called" << std::endl; }
	
	Form::Form(std::string nametmp, int gradetmp, int evotmp): name(nametmp), isSigned(0), grade(gradetmp), evoGrade(evotmp)
	{ std::cout << "Triple constructor called" << std::endl; }
	
	Form::Form(Form const& tmp) : evoGrade(tmp.evoGrade)
	{
		std::cout << "Copy constructor called" << std::endl;
		*this = tmp;
	}

/* ************************************************************************** */
/* GETTERS                                                                    */
/* ************************************************************************** */

	std::string Form::getName() const { return this->name; }

 bool        Form::getIsSgined() const { return this->isSigned; }

 int         Form::getGrade() const { return this->grade; }

 int         Form::getEvoGrade() const { return this->evoGrade; }

/* ************************************************************************** */
/* SETTERS                                                                    */
/* ************************************************************************** */

	void        Form::setName(std::string nameTmp) { const_cast<std::string&>(this->name) = const_cast<std::string&>(nameTmp); }

	void        Form::setIsSgined(bool signedTmp) { this->isSigned = signedTmp; }

	void        Form::setGrade(int gradeTmp) { this->grade = gradeTmp; }

	void        Form::setEvoGrade(int evoGradeTmp) { const_cast<int&>(this->evoGrade) = const_cast<int&>(evoGradeTmp); }

/* ************************************************************************** */
/* ASSIGNMENT OPERATOR                                                        */
/* ************************************************************************** */

	Form& Form::operator=(Form const& tmp)
	{
		this->setName(tmp.getName());
		this->isSigned = tmp.isSigned;
		this->grade = tmp.grade;
		this->setEvoGrade(tmp.getEvoGrade());
		std::cout << "Copy assignment constructor called." << std::endl;
		return *this;
	}

   std::ostream& operator<<(std::ostream& os, const Form& f)
   {
		os << f.getName() << std::endl
		<< "Sign grade : " << f.getGrade() << std::endl
		<< "Execute grade : " << f.getEvoGrade() << std::endl
		<<  "Signed : " << std::boolalpha << f.getIsSgined();
		return os;
   }

/* ************************************************************************** */
/* DESTRUCTOR                                                                 */
/* ************************************************************************** */

	Form::~Form() { std::cout << "Destructor called" << std::endl; }

/* ************************************************************************** */
/* HELPERS                                                                    */
/* ************************************************************************** */

void Form::beSigned(Bureaucrat& b){
		if(b.getGrade() > evoGrade)
			throw GradeTooLowException();
		else if(b.getGrade() >= 1){
			setIsSgined(true);
			std::cout << this->getName() << " signed from " << b.getName() << "." << std::endl;
		}
}

	const char* Form::GradeTooHighException::what(void) const throw() { return "Your grade too high."; }
	
	const char* Form::GradeTooLowException::what(void) const throw() { return "Your grade too low."; }

