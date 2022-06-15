#include "Trust_Account.h"
#include <string>
Trust_Account::Trust_Account(std::string name_val, double balance, double int_rate)
    : Savings_Account {name_val, balance, int_rate}, count {0}{
        std::cout << "Trust_Account constructor is called" << std::endl;
}

Trust_Account::~Trust_Account()
{
}

double Trust_Account::bonus_deposit(double deposit_val){
    if(count < 4 && deposit_val >= 5000){
        count++;
        return Savings_Account::deposit(deposit_val+500);
    }
    std::cout << "No bonus" << std::endl;
    return Savings_Account::deposit(deposit_val);

}



