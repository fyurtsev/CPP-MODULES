#pragma once

#include <iostream>
#include <fstream>
#include <map>
#include <sstream>
#include <string>

class BitcoinExchange {
    public:
        std::map<std::string, double> data;
        std::map<std::string, double> exchange;

        void readData();
        double give_back_data(std::string key, double value);

    class fileNameError : public std::exception{
        public:
            const char *what() const throw(){
                return "The file extension is incorrect.\nIt should be \".csv\"";
            }
    };
};
