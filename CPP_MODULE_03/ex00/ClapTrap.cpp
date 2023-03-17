#include "ClapTrap.hpp"

/* ************************************************************************** */
/* CONSTRUCTORS                                                               */
/* ************************************************************************** */


ClapTrap::ClapTrap(void): Name("Unnamed ClapTrap"), HitPoints(10), EnergyPoints(10),AttackDamage(0){
    std::cout << "Default constructor called" << std::endl;
    return;
}

ClapTrap::ClapTrap(std::string const& name): Name(name), HitPoints(10), EnergyPoints(10),AttackDamage(0){
    std::cout << "String constuctor called" << std::endl;
    return;
}

ClapTrap::ClapTrap(const ClapTrap &clap){
    std::cout << "Copy constructor called" << std::endl;
    *this = clap;
    return;
}

/* ************************************************************************** */
/* ASSIGNMENT OPERATOR                                                        */
/* ************************************************************************** */

ClapTrap& ClapTrap::operator=(const ClapTrap &clap)
{
    this->Name = clap.getName();
    this->HitPoints = clap.getHitPoints();
    this->EnergyPoints = clap.getEnergyPoints();
    this->AttackDamage = clap.getAttackDamage();
    std::cout << "Copy assignment operator called:" << this->Name << std::endl;
    return *this;
}

/* ************************************************************************** */
/* GETTERS                                                                    */
/* ************************************************************************** */


std::string const& ClapTrap::getName() const{ return this->Name; }

int ClapTrap::getHitPoints() const { return this->HitPoints; }

int ClapTrap::getEnergyPoints() const { return this->EnergyPoints; }

int ClapTrap::getAttackDamage() const { return this->AttackDamage; }

/* ************************************************************************** */
/* SETTERS                                                                    */
/* ************************************************************************** */

void ClapTrap::setName(std::string _name) { this->Name = _name; }

void ClapTrap::setHitPoints(int _num) { this->HitPoints = _num; }

void ClapTrap::setEnergyPoints(int _num) { this->EnergyPoints = _num; }

void ClapTrap::setAttackDamage(int _num) { this->AttackDamage = _num; }

/* ************************************************************************** */
/* DESTRUCTOR                                                                 */
/* ************************************************************************** */


ClapTrap::~ClapTrap(void){
    std::cout << "Destructor called" << std::endl;
}

/* ************************************************************************** */
/* ACTIONS                                                                    */
/* ************************************************************************** */


void ClapTrap::attack(const std::string& target){
    if(getEnergyPoints() > 0 && getHitPoints() > 0)
    {
        std::cout << this->Name << " attacks " 
        << target << ", causing " << this->AttackDamage 
        << " points of damage!" << std::endl;
        this->EnergyPoints -= 1;
    }
    else
    {
        if(getEnergyPoints() <= 0)
            std::cout << "ClapTrap " << this->Name << " has no energy point left!" << std::endl;
        else
            std::cout << "ClapTrap " << this->Name << " cannot be repaired because he's" << " already dead!" << std::endl;
    }
    return;
}

void ClapTrap::takeDamage(unsigned int amount){
    if(getEnergyPoints() > 0 && getHitPoints() > 0)
    {   
        std::cout << this->Name << " take damage " << amount << " points" << std::endl;
        this->EnergyPoints -= 1;
        this->HitPoints -= amount;
    }
    else
    {
        if(getEnergyPoints() <= 0)
            std::cout << "ClapTrap " << this->Name << " has no energy point left!" << std::endl;
        else
            std::cout << "ClapTrap " << this->Name << " cannot be repaired because he's" << " already dead!" << std::endl;
    }
    return;
}

void ClapTrap::beRepaired(unsigned int amount){
    if(getEnergyPoints() > 0 && getHitPoints() > 0)
    {
        std::cout << this->Name <<" repaired " << amount << " points" << std::endl;
        this->HitPoints += amount;
        this->EnergyPoints -= 1;
    }
    else
    {
        if(getEnergyPoints() <= 0)
            std::cout << "ClapTrap " << this->Name << " has no energy point left!" << std::endl;
        else
            std::cout << "ClapTrap " << this->Name << " cannot be repaired because he's" << " already dead!" << std::endl;
    }
    return;
}

