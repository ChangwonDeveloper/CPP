#include "Account.h"
#include <iostream>
Account::Account()
{
    std::cout << "Account constructor is called" << std::endl;
    account_number++;
}

Account::~Account()
{
    std::cout << "Account destructor is called" << std::endl;
    account_number--;
}

int Account::account_number = 0;