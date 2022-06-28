#include "Account.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <ostream>

int Account::account_number = 0;
std::vector<std::string> Account::unique_number_list;
std::string Account::account_info = "Account_info";


Account::Account()
{
	account_unique_number = create_unique_number();
	account_name = create_a_new_account_name();
	account_password = create_a_new_account_password();
	account_balance = create_a_new_account_balance();
	write_account_info(account_unique_number, account_name, account_password, account_balance);
	account_number++;
}

Account::~Account()
{
	std::cout << "Account destructor is called" << std::endl;
	account_number--;
}

std::string Account::create_unique_number()
{
	// how to prevent if account_number is larger than 999999?
	int digit = 0;
	std::string unique_num = "";
	int account_number_copy = account_number;
	while (account_number_copy % 10 != account_number_copy)
	{
		++digit;
		account_number_copy = account_number_copy / 10;
	}

	for (int i = 0; i < 5 - digit; i++)
	{
		unique_num += "0";
	}
	unique_num += std::to_string(account_number);
	return unique_num;
}


std::string Account::create_a_new_account_name() {
	std::string account_name_val = "";
	
	std::cout << "\nPlease enter your account name within 10 characters\n" << std::endl;
	while (true) {
		std::cin >> account_name_val;
		if (account_name_val.size() > 10) {
			std::cout << "\nAccount name must be within 10 characters\n" << std::endl;
			continue;
		}
		return account_name_val;
	}
}
std::string Account::create_a_new_account_password() {
	std::string account_password_val = "";

	std::cout << "\nPlease enter your account password within 20 characters\n" << std::endl;
	while (true) {
		std::cin >> account_password_val;
		if (account_password_val.size() > 20) {
			std::cout << "\nAccount password must be within 20 characters\n" << std::endl;
			continue;
		}
		return account_password_val;
	}
}

double Account::create_a_new_account_balance() {
	double balance_val = 0;

	std::cout << "\nPlease enter your initial balance of your account\n" << std::endl;
	while (true)
	{
	if (!(std::cin >> balance_val)) {
		std::cout << "\nEnter ONLY number\n" << std::endl;
		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');
		continue;
	}
	else if (balance_val < 0)
	{
		std::cout << "\nEnter ONLY positive number\n" << std::endl;
		continue;
	}
	return balance_val;
	}
}


void Account::write_account_info(std::string account_unique_number_val, std::string account_name_val, std::string account_password_val, double account_balance_val)
{
		std::ofstream account_file("Account_info.txt", std::ios::out | std::ios::app);
		if (account_file.fail())
		{
			std::cerr << "\nError in writing file" << std::endl;
		}
		else
		{
		account_file << account_unique_number_val << " ";
		account_file << account_name_val << " ";
		account_file << account_password_val << " ";
		account_file << account_balance_val << " " << std::endl;
		account_file.close();

		}
}
