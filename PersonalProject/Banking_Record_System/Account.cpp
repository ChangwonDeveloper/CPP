#include "Account.h"
#include <iostream>
#include <vector>
#include <string>
int Account::account_number = 0;
std::vector<std::string> Account::unique_number_list {0};


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

std::string Account::unique_number_generator(){
    int digit {0};
    std::string unique_num = "";
    
    while(account_number % 10 != account_number)
    {
        ++digit;
    }
    
    for(int i = 0; i < 6-digit; i++)
    {
        unique_num += "0";
    }
    unique_num += std::to_string(digit);
    return unique_num;
}