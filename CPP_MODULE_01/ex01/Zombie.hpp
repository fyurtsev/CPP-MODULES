#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie{
    
    private:
        std::string _name;
    public:
        Zombie();
        Zombie(std::string name);
        void setname(std::string _newname);
        void announce(void);
        ~Zombie();
};
Zombie* zombieHorde( int N, std::string name );
Zombie* newZombie( std::string name);
#endif