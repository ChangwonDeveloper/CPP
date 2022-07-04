// Banking_Record_System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <ostream>
#include <vector>
#include "Account.h"

void display_menu();
int get_user_input();
void go_to_selected_menu(int user_input);
bool check_account_name();

// Error in counting account number. it count even though the new account is not successfully created
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
    {

        std::cout << "\nWELCOME TO THE CREATING A NEW ACCOUNT MENU!\n" << std::endl;
        Account account;
        break;
    }
    case 2:
        std::cout << "\nWELCOME TO THE DEPOSIT AMOUNT MENU!\n" << std::endl;
        Account user = Account::get_account_info(Account::log_in_account());
        user.show_account_info();
        double deposit_amount = user.deposit_amount();
        user.is_enough_balance(deposit_amount);
        user.write_account_info(user.get_account_unique_number(), user.get_account_name(),
            user.get_account_password(), user.get_account_balacne());
        break;
    }
}

bool check_account_name()
{
    std::string user_account_name_input{ "" };
    std::cout << "Enter your account name : ";
    std::cin >> user_account_name_input;
    std::vector<std::string> user_candidate;

    std::ifstream account_info_file("Account_info");
    std::string account_unique_number_val, account_name_val, account_password_val;
    double account_balance_val;
    if (account_info_file.fail())
    {
        std::cerr << "Error occured in check account name" << std::endl;
        return false;
    }

    while (!account_info_file.eof())
    {
        account_info_file >> account_unique_number_val;
        account_info_file >> account_name_val;
        account_info_file >> account_password_val;
        account_info_file >> account_balance_val;
        std::cout << account_name_val << std::endl;
        if (account_name_val == user_account_name_input)
        {
            user_candidate.push_back(user_account_name_input);
            std::cout << "Account name is found" << std::endl;
            return true;
        }
    }
    return false;
}
