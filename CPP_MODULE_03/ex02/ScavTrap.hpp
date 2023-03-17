#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
    public:
        ScavTrap(void);
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &Scav);
        
        void attack(const std::string& target);
        void guardGate();
        
        ScavTrap &operator=(const ScavTrap &Scav);
        
        ~ScavTrap(void);
};