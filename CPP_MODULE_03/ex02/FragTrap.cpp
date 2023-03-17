#include "FragTrap.hpp"

/* ************************************************************************** */
/* CONSTRUCTORS                                                               */
/* ************************************************************************** */

FragTrap::FragTrap(void){
    setName("Unnamed FragTrap");
    setHitPoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);
    std::cout << "FragTrap default constructor called" << std::endl;
    return;
}

FragTrap::FragTrap(std::string name){
    setName(name);
    setHitPoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);
    std::cout << "FragTrap string constructor called" << std::endl;
    return;
}

FragTrap::FragTrap(const FragTrap &Frag){
    std::cout << "FragTrap copy constructor called" << std::endl;
   *this = Frag;
   return;
}

/* ************************************************************************** */
/* ASSIGNMENT OPERATOR                                                        */
/* ************************************************************************** */

FragTrap& FragTrap::operator=(const FragTrap &Frag)
{
    setName(Frag.getName());
    setHitPoints(Frag.getHitPoints());
    setEnergyPoints(Frag.getEnergyPoints());
    setAttackDamage(Frag.getAttackDamage());
    std::cout << "FragTrap copy assignment operator called: " << getName() << std::endl;
    return *this;
}

/* ************************************************************************** */
/* ACTIONS                                                                    */
/* ************************************************************************** */

void FragTrap::highFivesGuys(void){ std::cout << "FragTrap " << getName() <<" send: Hey high fives guys" << std::endl; }

/* ************************************************************************** */
/* DESTRUCTOR                                                                 */
/* ************************************************************************** */

FragTrap::~FragTrap(){ std::cout << "FragTrap destructor called" << std::endl; }
