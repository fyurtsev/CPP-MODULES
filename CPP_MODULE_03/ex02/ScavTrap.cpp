#include "ScavTrap.hpp"

/* ************************************************************************** */
/* CONSTRUCTORS                                                               */
/* ************************************************************************** */

ScavTrap::ScavTrap(void){
    setName("Unnamed ScavTrap");
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(20);
    std::cout << "ScapvTrap default constructor called" << std::endl; 
}
ScavTrap::ScavTrap(std::string name){
    setName(name);
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(20);
    std::cout << "ScapvTrap string constructor called" << std::endl; 
}

ScavTrap::ScavTrap(const ScavTrap &Scav){
    std::cout << "ScavTrap  copy constructor called" << std::endl;
    *this = Scav;
    return;
}


/* ************************************************************************** */
/* ASSIGNMENT OPERATOR                                                        */
/* ************************************************************************** */

ScavTrap& ScavTrap::operator=(const ScavTrap &Scav)
{
    setName(Scav.getName());
    setHitPoints(Scav.getHitPoints());
    setEnergyPoints(Scav.getEnergyPoints());
    setAttackDamage(Scav.getAttackDamage());
    std::cout << "ScavTrap  copy assignment operator called:" << getName() << std::endl;
    return *this;
}


/* ************************************************************************** */
/* ACTIONS                                                                    */
/* ************************************************************************** */

void ScavTrap::attack(const std::string& target){
    if(getEnergyPoints() > 0 && getHitPoints() > 0)
    {
        std::cout << getName() << " attacks " 
        << target << ", causing " << getAttackDamage()
        << " points of damage!" << std::endl;
        setEnergyPoints(getEnergyPoints() - 1);
    }
    else
    {
        if(getEnergyPoints() <= 0)
            std::cout << "ScavTrap " << getName() << " has no energy point left!" << std::endl;
        else
            std::cout << "ScavTrap " << getName() << " cannot be repaired because he's" << " already dead!" << std::endl;
    }
    return;
}

void ScavTrap::guardGate(){ std::cout << "ScavTrap is now in Gate keeper mode." << std::endl; }

/* ************************************************************************** */
/* DESTRUCTOR                                                                 */
/* ************************************************************************** */

ScavTrap::~ScavTrap(){ std::cout << "ScavTrap destructor called" << std::endl; }
