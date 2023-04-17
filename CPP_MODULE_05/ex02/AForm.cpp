#include "AForm.hpp"
#include "Bureaucrat.hpp"

/* ************************************************************************** */
/* CONSTRUCTORS                                                               */
/* ************************************************************************** */

	AForm::AForm(): name("unnamed AForm name"), isSigned(0), grade(0), evoGrade(0)
	{ std::cout << "Default constructor called" << std::endl; }
	
	AForm::AForm(std::string nametmp): name(nametmp), isSigned(0), grade(0), evoGrade(0)
	{ std::cout << "String constructor called" << std::endl; }
	
	AForm::AForm(int gradetmp): name("unnamed AForm name"), isSigned(0), grade(gradetmp), evoGrade(0)
	{ std::cout << "Int constructor called" << std::endl; }
	
	AForm::AForm(int gradetmp, int evotmp): name("unnamed AForm name"), isSigned(0), grade(gradetmp), evoGrade(evotmp)
	{ std::cout << "Double int constructor called" << std::endl; }
	
	AForm::AForm(std::string nametmp, int gradetmp, int evotmp): name(nametmp), isSigned(0), grade(gradetmp), evoGrade(evotmp)
	{ std::cout << "Triple constructor called" << std::endl; }
	
	AForm::AForm(AForm const& tmp) : evoGrade(tmp.evoGrade)
	{
		std::cout << "Copy constructor called" << std::endl;
		*this = tmp;
	}

/* ************************************************************************** */
/* GETTERS                                                                    */
/* ************************************************************************** */

	std::string AForm::getName() const { return this->name; }

 bool        AForm::getIsSgined() const { return this->isSigned; }

 int         AForm::getGrade() const { return this->grade; }

 int         AForm::getEvoGrade() const { return this->evoGrade; }

/* ************************************************************************** */
/* SETTERS                                                                    */
/* ************************************************************************** */

	void        AForm::setName(std::string nameTmp) { const_cast<std::string&>(this->name) = const_cast<std::string&>(nameTmp); }

	void        AForm::setIsSgined(bool signedTmp) { this->isSigned = signedTmp; }

	void        AForm::setGrade(int gradeTmp) { this->grade = gradeTmp; }

	void        AForm::setEvoGrade(int evoGradeTmp) { const_cast<int&>(this->evoGrade) = const_cast<int&>(evoGradeTmp); }

/* ************************************************************************** */
/* ASSIGNMENT OPERATOR                                                        */
/* ************************************************************************** */

	AForm& AForm::operator=(AForm const& tmp)
	{
		this->setName(tmp.name);
		this->isSigned = tmp.isSigned;
		this->grade = tmp.grade;
		this->setEvoGrade(tmp.evoGrade);
		std::cout << "Copy assignment constructor called." << std::endl;
		return *this;
	}

   std::ostream& operator<<(std::ostream& os, const AForm& f)
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

	AForm::~AForm() { std::cout << "Destructor called" << std::endl; }

/* ************************************************************************** */
/* HELPERS                                                                    */
/* ************************************************************************** */

void AForm::beSigned(Bureaucrat& b){
		if(b.getGrade() > evoGrade)
			throw GradeTooLowException();
		else if(b.getGrade() >= 1){
			setIsSgined(true);
			std::cout << this->getName() << " signed from " << b.getName() << "." << std::endl;
		}
}
void AForm::execute(Bureaucrat const & executor) const{
	std::cout << getName() << ", executed from " << executor.getName() << std::endl;
}

	const char* AForm::GradeTooHighException::what(void) const throw() { return "Your grade too high."; }

	const char* AForm::NotSignedException::what(void) const throw() { return "Your form not signed."; }
	
	const char* AForm::GradeTooLowException::what(void) const throw() { return "Your grade too low."; }

	const char* AForm::FileErrorException::what(void) const throw() { return "File error."; }

	
