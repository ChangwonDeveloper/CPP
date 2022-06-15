#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_
#include <string>
#include "Savings_Account.h"

//2. Add a Trust account class to the Account hierarchy
//    A Trust account has a name, a balance, and an interest rate
//    The Trust account deposit works just like a savings account deposit.
//    However, any deposits of $5000.00 or more will receive a $50.00 bonus deposited to the account.
//    
//    The Trust account withdrawal should only allow 3 withdrawals per year and each of these must be less than 20% of the account balance.
//    You don't have to keep track of calendar time for this application, just make sure the 4th withdrawal fails :)
class Trust_Account: public Savings_Account
{
private:
    int count;
public:
    Trust_Account(std::string name_val, double balance, double int_rate);
    ~Trust_Account();
    double bonus_deposit(double deposit_val);

};

#endif // _TRUST_ACCOUNT_H_
