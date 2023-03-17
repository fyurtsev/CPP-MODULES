#include "Info.hpp"

std::string Info::getfirstName() const { return this->_firstName; }
std::string Info::getlastName() const { return this->_lastName; }
std::string Info::getnickName() const { return this->_nickName; }
std::string Info::getPhoneNum() const { return this->_phoneNum;}
std::string Info::getdarkestSecret() const { return this->_darkestSecret;}

void Info::setfirstName(const std::string str) { this->_firstName = str; } 
void Info::setlastName(const std::string str) { this->_lastName = str; }
void Info::setnickName(const std::string str) { this->_nickName = str; }
void Info::setPhoneNum(const std::string str) { this->_phoneNum = str; }
void Info::setdarkestSecret(const std::string str) { this->_darkestSecret = str; }
