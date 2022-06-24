#include <iostream>
#include "Account.h"


void display_menu();
int get_user_input();

int main(){
    display_menu();
    get_user_input();
    
    Account a;
    
    std::cout << a.get_account_number() << std::endl;
    
    return 0;
    
}

void display_menu(){
    int choice = 0;
    std::cout << "MAIN MENU" << std::endl;
    std::cout << "01. CREATE A NEW ACCOUNT" << std::endl;
    std::cout << "02. DEPOSIT AMOUNT" << std::endl;
    std::cout << "03. WITHDRAW AMOUNT" << std::endl;
    std::cout << "04. BALANCE ENQUIRY" << std::endl;
    std::cout << "05. ALL ACOUNT HOLDER LIST" << std::endl;
    std::cout << "06. CLOSE AN ACCOUNT" << std::endl;
    std::cout << "07. MODIFY AN ACCOUNT" << std::endl;
    std::cout << "08. EXIT" << std::endl;
    std::cout << "Select Your Option <1-8>" << std::endl;
    
    
}

int get_user_input(){
    int input {0};
    
    while(true){
        std::cin >> input;
        if(std::cin.fail()){
            std::cout << "Enter ONLY number" << std::endl;
            std::cin.clear();
            std::cin.ignore(INT_MAX, '\n');
        }else if(input > 8 || input < 1){
            std::cout << "Enter valid number" << std::endl;
        }else{
            break;
        }
    }
}