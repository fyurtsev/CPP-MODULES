#include "Zombie.hpp"

void Zombie::announce(void) { std::cout<<this->_name<<": BraiiiiiiinnnzzzZ..."<<std::endl; }

Zombie::Zombie() : _name("")
{ }

Zombie::Zombie(std::string name) : _name(name)
{ }

Zombie::~Zombie()
{
    std::cout<<"zombie destroyed"<<std::endl;
}


