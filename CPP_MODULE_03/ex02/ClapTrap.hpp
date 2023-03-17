#pragma once

#include <iostream>

class ClapTrap{
    private:
        std::string Name;
        int HitPoints;
        int EnergyPoints;
        int AttackDamage;
    public:
        ClapTrap(void);
        ClapTrap(std::string const& name);
        ClapTrap(const ClapTrap &clap);
        ClapTrap &operator=(const ClapTrap &clap);
        ~ClapTrap(void);

        std::string const& getName() const;
        int getHitPoints() const;
        int getEnergyPoints() const;
        int getAttackDamage() const;

        void setName(std::string _name);
        void setHitPoints(int num);
        void setEnergyPoints(int num);
        void setAttackDamage(int num);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        bool isAlive(void) const;
};
