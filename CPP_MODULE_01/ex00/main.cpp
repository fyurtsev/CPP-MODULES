#include "Zombie.hpp"

int main()
{
    Zombie dad = Zombie("dady");
    Zombie as;
    Zombie *deneme = newZombie("furkan");
    Zombie *mom;

    randomChump("sus laaaan");
    as = Zombie("sa");
    mom = newZombie("kes");
    dad.announce();
    as.announce();
    mom->announce();
    deneme->announce();

    delete(mom);
    delete(deneme);
    return(0);
}
