#include <iostream>

int main()
{
    std::string furkan = "HI THIS IS BRAIN";
    std::string *stringPTR = &furkan;
    std::string &stringREF = furkan;

    std::cout << "furkan bellek adresi:    " << &furkan << std::endl;
    std::cout << "stringPTR bellek adresi: " << &stringPTR << std::endl;
    std::cout << "stringREF bellek adres:  " << &stringREF << std::endl<<std::endl;

    std::cout << "furkan değeri:     " << furkan << std::endl;
    std::cout << "stringPTR değeri:  " << *stringPTR << std::endl;
    std::cout << "stringREF değeri:  " << stringREF << std::endl;
}