#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H
#include <string>
#include "Account.h"
//1. Add a Checking account class to the Account hierarchy
//    A Checking account has a name and a balance and has a fee of $1.50 per withdrawal transaction.
//    Every withdrawal transaction will be assessed this flat fee.
class Checking_Account: public Account {
private:
    static constexpr double fee = 1.5;
public:
    Checking_Account(std::string name_val, double balance_val); // constructor
    
    ~Checking_Account(); // destructor
    double get_balance(){
        return balance;
    }
    std::string get_name(){ return name;}
    double withdraw_transaction();
};

#endif // CHECKING_ACCOUNT_H
