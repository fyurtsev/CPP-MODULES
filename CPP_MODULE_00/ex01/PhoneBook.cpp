#include "PhoneBook.hpp"

void PhoneBook::add_pb(int i)
{
    std::string input;

    while(1)
    {
        std::cout<<"First Name: ";
        std::getline(std::cin, input);
        if(!input.empty())
        {
            contact[i].setfirstName(input);
            break;
        }
        else
            std::cout << "\033[31mWARNING >> Please write a First Name.\033[0m" << std::endl;
    }
    while(1)
    {
        std::cout<<"Last Name: ";
        std::getline(std::cin, input);
        if(!input.empty())
        {
            contact[i].setlastName(input);
            break;
        }
        else
            std::cout << "\033[31mWARNING >> Please write a Last Name.\033[0m" << std::endl;
    }
    while(1)
    {
        std::cout<<"Nickname: ";
        std::getline(std::cin, input);
        if(!input.empty())
        {
            contact[i].setnickName(input);
            break;
        }
        else
            std::cout << "\033[31mWARNING >> Please write a Nickname.\033[0m" << std::endl;
    }

    while(1)
    {
        std::cout<<"Darkest Secret: ";
        std::getline(std::cin, input);
        if(!input.empty())
        {
            contact[i].setdarkestSecret(input);
            break;
        }
        else
            std::cout << "\033[31mWARNING >> Please write a Darkest Secret.\033[0m" << std::endl;
    }

    while (1)
    {
        std::cout<<"Phone Number: ";
        std::getline(std::cin, input);
        if(!input.empty())
        { 
            contact[i].setPhoneNum(input);
            break;
        }
        else
            std::cout << "\033[31mWARNING >> Please write a phone number.\033[0m" << std::endl;
    }
}

void PhoneBook::display_details(int s)
{
    std::cout<<"First Name     : "<<contact[s].getfirstName()<<std::endl;
    std::cout<<"Last Name      : "<<contact[s].getlastName()<<std::endl;
    std::cout<<"Nickame        : "<<contact[s].getnickName()<<std::endl;
    std::cout<<"Phone number   : "<<contact[s].getPhoneNum()<<std::endl;
    std::cout<<"Darkest Secret : "<<contact[s].getdarkestSecret()<<std::endl;
}

int PhoneBook::display_book(int i)
{
    if(i == 0)
    {
        std::cout<<"The PhoneBook is empty!!!"<<std::endl;
        return (0);
    }

    std::cout<<"──────────────────────────────────────────────────────"<<std::endl;
    std::cout<<"    Index |First Name|Last Name |  Nickname"<<std::endl;

    for(int j = 0; j < i; j++)
    {
        std::cout<<"──────────────────────────────────────────────────────"<<std::endl;
        std::cout<<"         "<<j+1<<"|";
        std::string a;
        
        a.assign(contact[j].getfirstName());
        if(a.length() > 10)
            std::cout<<std::right<<std::setw(9)<<contact[j].getfirstName().substr(0,9)<<".|";
        else
        {
            std::cout<<std::right<<std::setw(10)<<a<<"|";
        }

        a=contact[j].getlastName();
        if(a.length() > 10)
            std::cout<<std::right<<std::setw(9)<<a.substr(0,9)<<".|";
        else
        {
            std::cout<<std::right<<std::setw(10)<<a<<"|";

        }
        
        a=contact[j].getnickName();
        if(a.length() > 10)
            std::cout<<std::right<<std::setw(9)<<a.substr(0,9)<<"."<<std::endl;
        else
        {
            std::cout<<std::right<<std::setw(10)<<a<<"|"<<std::endl;
        }
    }
    std::cout<<"──────────────────────────────────────────────────────"<<std::endl;
    return (1);
}

