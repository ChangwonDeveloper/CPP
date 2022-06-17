#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {
    // test your code here
    
    Checking_Account ca {"asdsd", -155};
    
    std::cout << "Program completed successfully" << std::endl;
    return 0;
}

