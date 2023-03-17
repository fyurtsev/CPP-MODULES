#include "ClapTrap.hpp"

int main()
{
    ClapTrap a;
    ClapTrap b("talha");
    ClapTrap c(b);
    ClapTrap d;

    d = b;
    std::cout << std::endl << a.getName() << std::endl << "Hit Point (" << a.getHitPoints() << ")    " << "Energy Point (" << a.getEnergyPoints() << ")  " << "Attack Point (" << a.getAttackDamage() << ")" << std::endl;
    std::cout << std::endl << b.getName() << std::endl << "Hit Point (" << b.getHitPoints() << ")    " << "Energy Point (" << b.getEnergyPoints() << ")  " << "Attack Point (" << b.getAttackDamage() << ")" << std::endl;
    std::cout << std::endl << c.getName() << std::endl << "Hit Point (" << c.getHitPoints() << ")    " << "Energy Point (" << c.getEnergyPoints() << ")  " << "Attack Point (" << c.getAttackDamage() << ")" << std::endl;
    std::cout << std::endl << d.getName() << std::endl << "Hit Point (" << d.getHitPoints() << ")    " << "Energy Point (" << d.getEnergyPoints() << ")  " << "Attack Point (" << d.getAttackDamage() << ")" << std::endl << std::endl;
    
    a.attack("goblin");
    std::cout << std::endl << a.getName() << std::endl << "Hit Point (" << a.getHitPoints() << ")    " << "Energy Point (" << a.getEnergyPoints() << ")  " << "Attack Point (" << a.getAttackDamage() << ")" << std::endl << std::endl;
    
    a.beRepaired(12);
    std::cout << std::endl << a.getName() << std::endl << "Hit Point (" << a.getHitPoints() << ")    " << "Energy Point (" << a.getEnergyPoints() << ")  " << "Attack Point (" << a.getAttackDamage() << ")" << std::endl << std::endl;
    
    a.takeDamage(20);
    std::cout << std::endl << a.getName() << std::endl << "Hit Point (" << a.getHitPoints() << ")    " << "Energy Point (" << a.getEnergyPoints() << ")  " << "Attack Point (" << a.getAttackDamage() << ")" << std::endl << std::endl;

    a.takeDamage(20);
    std::cout << std::endl << a.getName() << std::endl << "Hit Point (" << a.getHitPoints() << ")    " << "Energy Point (" << a.getEnergyPoints() << ")  " << "Attack Point (" << a.getAttackDamage() << ")" << std::endl << std::endl;

    a.takeDamage(20);
    std::cout << std::endl << a.getName() << std::endl << "Hit Point (" << a.getHitPoints() << ")    " << "Energy Point (" << a.getEnergyPoints() << ")  " << "Attack Point (" << a.getAttackDamage() << ")" << std::endl << std::endl; 
    
    b.setEnergyPoints(1);

}