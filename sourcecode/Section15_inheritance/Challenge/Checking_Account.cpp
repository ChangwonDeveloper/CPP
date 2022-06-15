#include "Checking_Account.h"
#include <string>
Checking_Account::Checking_Account(std::string name_val, double balance_val)
    : Account {name_val, balance_val}{
    std::cout << "Checking_Account cosntructor is called " << std::endl;
}


Checking_Account::~Checking_Account()
{
}

double Checking_Account::withdraw_transaction(){
    balance -= 1.5;
    return balance;
}
