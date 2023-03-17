#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

HumanB::~HumanB(){}
HumanB::HumanB(std::string _name): name(_name){}

void HumanB::setWeapon(Weapon &a)
{
    this->Weapons = &a;
}

void HumanB::attack(void) const
{
    std::cout << this->name << " attacks with their "
            << this->Weapons->getType() << std::endl;
}