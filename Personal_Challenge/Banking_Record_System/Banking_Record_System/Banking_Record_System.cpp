// Banking_Record_System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Account.h"

void display_menu();
int get_user_input();
void go_to_selected_menu(int user_input);

int main()
{
    display_menu();
    int input = get_user_input();
    std::cout << "Your input is " << input << std::endl;
    go_to_selected_menu(input);
    
}


void display_menu() {

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

int get_user_input() {
    int input = 0;

    while (true) {
        std::cin >> input;
        if (std::cin.fail()) {
            std::cout << "\nEnter ONLY number\n" << std::endl;
            std::cin.clear();
            std::cin.ignore(INT_MAX, '\n');
        }
        else if (input > 8 || input < 1) {
            std::cout << "\nEnter valid number\n" << std::endl;
        }
        else {
            return input;
            break;
        }
    }
}

void go_to_selected_menu(int user_input)
{
    switch (user_input)
    {
    case 1:
        std::cout << "\nWELCOME TO THE CREATING A NEW ACCOUNT MENU!\n" << std::endl;
        Account account;
        break;
    }
}
