#pragma once

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap{
    public:
        FragTrap(void);
        FragTrap(std::string name);
        FragTrap(const FragTrap &Frag);

        FragTrap &operator=(const FragTrap &Frag);
        
        void highFivesGuys(void);

        ~FragTrap(void);


};