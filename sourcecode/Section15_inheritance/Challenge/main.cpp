// Section 15
// Challenge 
#include <iostream>
#include <vector>
#include "Savings_Account.h"
#include "Account_Util.h"
#include "Checking_Account.h"
#include "Trust_Account.h"

using namespace std;

int main() {
    cout.precision(2);
    cout << fixed;
   
    // Accounts
    vector<Account> accounts;
    accounts.push_back(Account {});
    accounts.push_back(Account {"Larry"});
    accounts.push_back(Account {"Moe", 2000} );
    accounts.push_back(Account {"Curly", 5000} );
    
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts,2000);
    cout << "============================\n" << endl;
    Account a {"sda", 500};
    Checking_Account b {"sda", 500};
    cout << b.get_balance() << endl;
    cout << b.get_name() << endl;
    cout << b.withdraw_transaction() << endl;
    // Savings 

    vector<Savings_Account> sav_accounts;
    sav_accounts.push_back(Savings_Account {} );
    sav_accounts.push_back(Savings_Account {"Superman"} );
    sav_accounts.push_back(Savings_Account {"Batman", 2000} );
    sav_accounts.push_back(Savings_Account {"Wonderwoman", 5000, 5.0} );

    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);

    Trust_Account ta {"dsdg", 0, 0};
    cout << ta.get_balance() << endl;
    ta.bonus_deposit(5000);
    ta.bonus_deposit(5000);
    ta.bonus_deposit(5000);
    ta.bonus_deposit(1000);
    ta.bonus_deposit(5000);
    ta.bonus_deposit(5000);
    cout << ta.get_balance() << endl;
    
    

    return 0;
}

