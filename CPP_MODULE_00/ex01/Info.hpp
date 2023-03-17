#ifndef INFO_HPP
#define INFO_HPP

#include<iostream>

class Info{
    private:
        std::string _firstName;
        std::string _lastName;
        std::string _nickName;
        std::string _darkestSecret;
        std::string _phoneNum;
    public:
        std::string getfirstName() const;
        std::string getlastName() const;
        std::string getnickName() const;
        std::string getPhoneNum() const;
        std::string getdarkestSecret() const;
        
        void setfirstName(const std::string str);
        void setlastName(const std::string str);
        void setnickName(const std::string str);
        void setPhoneNum(const std::string str);
        void setdarkestSecret(const std::string str);
};



#endif