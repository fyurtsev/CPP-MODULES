#include "Zombie.hpp"

int main()
{
    int N = 10;
    Zombie *Family = zombieHorde(N, "Family");

    for (int i = 0; i < N; i++)
        Family[i].announce();
    delete[] Family;
    Family = zombieHorde(N, "Familsy");
    for (int i = 0; i < N; i++)
        Family[i].announce();
    delete[] Family;
}