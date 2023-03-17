#include "Zombie.hpp"

void Zombie::announce(void) { std::cout<<this->_name<<": BraiiiiiiinnnzzzZ..."<<std::endl; }

void Zombie::setname(std::string _newname) { this->_name = _newname; }

Zombie::Zombie() : _name("")
{ }

Zombie::Zombie(std::string name) : _name(name)
{ }

Zombie::~Zombie()
{
    std::cout<<"zombie destroyed"<<std::endl;
}

Zombie* newZombie( std::string name)
{
    return(new Zombie(name));
}