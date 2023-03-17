#include <iostream>


int main(int ac, char **av)
{
    if(ac == 1)
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
    else
    {
        std::string st1;
        for (int i = 1; i < ac; i++)
        {
            st1 = av[i];
            for (int j = 0; j < (int)std::strlen(av[i]); j++)
            {
                std::cout<<(char)toupper(av[i][j]);
            }
        }
        std::cout<<std::endl;
        return(0);
    }
    return(1);
}
