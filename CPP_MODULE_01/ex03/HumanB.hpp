#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
    private:
        std::string name;
        Weapon* Weapons;
    public:
        HumanB(std::string _name);
        void attack(void) const;
        void setWeapon(Weapon &a);
        ~HumanB();
};

#endif