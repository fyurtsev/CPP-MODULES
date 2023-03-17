#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if(N == 0)
    {
        std::cout<<"Invalid parameter \"N\""<<std::endl;
        return NULL;
    }
    Zombie *family = new Zombie[N];
    for (int i = 0; i < N; i++)
        family[i].setname(name);
    return(family);
}