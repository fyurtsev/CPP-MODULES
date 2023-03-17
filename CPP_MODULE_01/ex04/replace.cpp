#include "replace.hpp"

std::string replace(std::string line, std::string s1, std::string s2)
{
    std::size_t pos;
    while((pos = line.find(s1)) != std::string::npos)
    {
        line.erase(pos, s1.length());
        line.insert(pos, s2);
        pos += s2.length();
    }
    return(line);
}

void readFile(char **av)
{
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::ifstream originalFile(filename);
    std::ofstream copyFile(filename+".replace");
    std::string line;

    if(originalFile.is_open())
    {
        while(getline(originalFile, line))
            copyFile << replace(line, s1, s2) << std::endl;
        originalFile.close();

    }
    else
        std::cout << "Unable to open file" << std::endl;
}
