#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>
class Account
{
private:
    static int account_number;
    std::string account_name;
    std::string account_password;
    double balance;
    int unique_number;
    
public:
    int get_account_number() {return account_number;}
    Account();
    ~Account();

};

#endif // _ACCOUNT_H_
