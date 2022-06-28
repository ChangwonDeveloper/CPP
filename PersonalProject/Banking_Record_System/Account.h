#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>
#include <vector>
class Account
{
private:
    static std::vector<std::string> unique_number_list;
    static int account_number;
    std::string account_name;
    std::string account_password;
    double balance;
    int unique_number;
    
public:
    int get_account_number() const {return account_number;}
    Account();
    ~Account();
    std::string unique_number_generator();

};

#endif // _ACCOUNT_H_
