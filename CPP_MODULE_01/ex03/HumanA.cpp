#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

HumanA::HumanA(std::string _name, Weapon& _Weapons): name(_name), Weapons(_Weapons){}
HumanA::~HumanA(){}

void HumanA::attack(void)
{
    std::cout << this->name << " attacks with their " << this->Weapons.getType() << std::endl;
}