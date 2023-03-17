#include "Harl.hpp"

void    Harl::debug(void) { std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!\n" << std::endl;}

void Harl::info(void) { std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger!\nIf you did, I wouldn’t be asking for more!\n" << std::endl; }

void Harl::warning(void) { std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month.\n" << std::endl; }

void Harl::error(void) { std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl; }

void Harl::complain(const std::string level)
{
    int i = 0;
    std::string s[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    while(s[i].compare(level) != 0 && i < 4)
        i++;
    switch(i)
    {
        case 0:
            this->debug();
            break;
        case 1:
            this->info();
            break;
        case 2:
            this->warning();
            break;
        case 3:
            this->error();
            break;
    }
}