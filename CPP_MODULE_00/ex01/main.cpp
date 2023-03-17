#include "PhoneBook.hpp"

void PhoneBook::addContactNum() { this->contactNum++; }

int PhoneBook::displayContactNum() { return this->contactNum; }

int main()
{
    PhoneBook pb;
    std::string input;
    int s, f = 0, i = 0;
    while(1)
    {
        if(i == 8)
            i = 0;
        std::cout<<"\033[1;32mChoose one command and input >> [ ADD | SEARCH | EXIT]\033[0m"<<std::endl;
        std::getline(std::cin, input);
        if(input.compare("ADD") == 0 || input.compare("Add") == 0 || input.compare("add") == 0)
        {
            pb.add_pb(i);
            i++;
            if(pb.displayContactNum() != 8)
                pb.addContactNum();
        }
        else if(input.compare("SEARCH") == 0 || input.compare("Search") == 0 || input.compare("search") == 0)
        {
            if(pb.display_book(pb.displayContactNum()))
                while(1)
                {
                    f=0;
                    std::cout<<"choose the index"<<std::endl;
                    std::getline(std::cin, input);
                    for (int j = 0; j < (int)input.length(); j++)
                    {
                        if(!std::isdigit(input[j]))
                            f = 1;
                    }
                    if(f == 1)
                        s=11;
                    else
                        s=std::stoi(input);
                    if(s>pb.displayContactNum())
                    {
                        std::cout<<"\033[31mWarning !!! no such a index | You need choose another one\033[0m"<<std::endl;
                        pb.display_book(pb.displayContactNum());
                    }
                    else if(s > 0 && s<9)
                    {
                        pb.display_details(s - 1);
                        break ;
                    }
                }
        }
        else if (input.compare("EXIT") == 0 || input.compare("Exit") == 0 || input.compare("exit") == 0)
        {
            std::cout<<"\033[31mEXIT\033[0m"<<std::endl;
            break ;
        }
    }

}