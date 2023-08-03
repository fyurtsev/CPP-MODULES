#include "BitcoinExchange.hpp"

void BitcoinExchange::readData()
{
    std::ifstream file("data.csv");
    if (file.is_open())
    {
        std::string line;
throw fileNameError();
        std::getline(file, line);
        while (std::getline(file, line))
        {
            std::string key = line.substr(0, 10);
            double value = std::stod(line.substr(11, line.size() - 11));
            data[key] = value;
        }
        file.close();
    }   
}

double BitcoinExchange::give_back_data(std::string key, double value)
{
    if(key < data.begin()->first)
        return (0);
    else{
        std::map<std::string, double>::iterator prev = data.begin();
        std::map<std::string, double>::iterator it;
        for (it = data.begin(); it != data.end(); ++it) {
            if(it->first >= key){
                if(it->first == key)
                    return(value * it->second);
                else
                    return(value * prev->second);
            }
            prev = it;
        }
    }
    return(1);
}


