#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Info.hpp"
#include <fstream>

class PhoneBook{
    private:
        int contactNum;
        Info contact[8];
    public:
        void add_pb(int i);
        int display_book(int i);
        void addContactNum();
        int displayContactNum();
        void display_details(int s); 
};


#endif