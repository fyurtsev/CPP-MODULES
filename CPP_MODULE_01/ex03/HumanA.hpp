#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
    private:
        std::string name;
        Weapon& Weapons;
    public: 
        HumanA(std::string _name, Weapon& _Weapons);
        void attack(void);
        ~HumanA();
};

#endif