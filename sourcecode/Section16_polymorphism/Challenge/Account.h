// Simple Account 
#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <iostream>
#include <string>
#include "I_Printable.h"

//1.  Modify the Account class so that it is now an Abstract class by adding the following pure virtual functions:
//        virtual bool deposit(double amount) = 0;
//        virtual bool withdraw(double amount) = 0;
//
//        Hint: you can implement these functions in the Account class if it makes sense
class Account : public I_Printable{
    friend std::ostream &operator<<(std::ostream &os, const Account &account);
private:   
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr double def_balance = 0.0;
protected:
    std::string name;
    double balance;
public:
    Account(std::string name = def_name, double balance = def_balance);
    virtual bool deposit(double amount) = 0;
    virtual bool withdraw(double amount) = 0;
    virtual ~Account() = default;
};
#endif