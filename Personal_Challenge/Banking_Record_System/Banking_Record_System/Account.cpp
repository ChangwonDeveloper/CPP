#include "Account.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <ostream>



Account::Account()
{
	account_unique_number = create_unique_number();
	account_name = create_a_new_account_name();
	account_password = create_a_new_account_password();
	account_balance = create_a_new_account_balance();
	write_account_info(account_unique_number, account_name, account_password, account_balance);;
}


Account::Account(std::string account_unique_number_val, std::string account_name_val, std::string account_password_val, double account_balance_val)
{
	std::cout << "Account with multi data is called" << std::endl;
	account_unique_number = account_unique_number_val;
	account_name = account_name_val;
	account_password = account_password_val;
	account_balance = account_balance_val;
}

Account::~Account()
{
	std::cout << "Account destructor is called" << std::endl;
}

std::string Account::create_unique_number()
{
	// how to prevent if account_number is larger than 999999?
	get_account_number();
	int digit = 0;
	std::string unique_num = "";
	int account_number_copy = get_account_number();
	while (account_number_copy % 10 != account_number_copy)
	{
		++digit;
		account_number_copy = account_number_copy / 10;
	}

	for (int i = 0; i < 5 - digit; i++)
	{
		unique_num += "0";
	}
	unique_num += std::to_string(get_account_number());
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
		else if (check_account_info_duplciate("account_name", account_name_val))
		{
			std::cout << "\nAccount name you entered is already exist." << std::endl;
			std::cout << "Please try another Account name." << std::endl;
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

// if name is the same, overwrite it or, add it at the end of the file
void Account::write_account_info(std::string const account_unique_number_val, std::string const account_name_val, std::string const account_password_val, double const account_balance_val)
{
	std::fstream account_file("Account_info.txt");
	std::string account_unique_number_value, account_name_value, account_password_value;
	double account_balance_value;
	if (account_file.fail())
	{
		std::cerr << "\nError in writing file" << std::endl;
	}
	while(!account_file.eof())
		account_file >> account_unique_number_value;
		account_file >> account_name_value;
		account_file >> account_password_value;
		account_file >> account_balance_value;
	{
		if (account_name_value == get_account_name())
		{
			account_file << get_account_unique_number();
			account_file << get_account_name();
			account_file << get_account_password();
			account_file << get_account_balacne();
			account_file.close();
			std::cout << "\nSuccess to modify the balance!" << std::endl;
		}
	}
	account_file >> account_unique_number_value;
	account_file >> account_name_value;
	account_file >> account_password_value;
	account_file >> account_balance_value;
	account_file << account_unique_number_val;
	account_file << account_name_val;
	account_file << account_password_val;
	account_file << account_balance_val;
	account_file.close();
	std::cout << "\nSuccess to create a new account!" << std::endl;
}

int Account::get_account_number() const
{
	std::ifstream account_number_file("Account_number.txt", std::ios::in);

	if (account_number_file.fail())
	{
		std::cerr << "Fail to open account number file" << std::endl;
		return -1;
	}

	int  account_num_val = { 0 };
	while (account_number_file >> account_num_val)
	{
	}

	account_number_file.close();
	return account_num_val;


}

void Account::write_account_number() const
{
	int current_account_number = get_account_number();
	std::ofstream account_number_file("Account_number.txt");

	if (account_number_file.fail())
	{
		std::cerr << "\nError in writing accunt number file" << std::endl;
	}
	else
	{
		account_number_file << current_account_number + 1 << " ";
		account_number_file.close();
	}
}

// try to make it useful to both account name and password to avoid duplication
// use default parameter to make sure it work both account name and password
bool Account::check_account_info_duplciate(std::string search_type, std::string user_log_in_input)
{
	std::ifstream account_info_file("Account_info.txt");
	std::string account_unique_number_val, account_name_val, account_password_val;
	double account_balance_val;

	if (account_info_file.fail())
	{
		std::cerr << "Error occured in check_acount_name_duplciate function" << std::endl;
		return true;
	}

	if (search_type == "account_name")
	{
		while (!account_info_file.eof())
		{
			account_info_file >> account_unique_number_val;
			account_info_file >> account_name_val;
			account_info_file >> account_password_val;
			account_info_file >> account_balance_val;

			if (account_name_val == user_log_in_input)
			{
				std::cout << "Account name " << user_log_in_input << " is found" << std::endl;
				account_info_file.close();
				return true;
			}
		}
		std::cout << "Account name " << user_log_in_input << " is not found" << std::endl;
		account_info_file.close();
		return false;
	}
	else if (search_type == "account_password")
	{
		while (!account_info_file.eof())
		{
			account_info_file >> account_unique_number_val;
			account_info_file >> account_name_val;
			account_info_file >> account_password_val;
			account_info_file >> account_balance_val;

			if (account_password_val == user_log_in_input)
			{
				std::cout << "Account password " << user_log_in_input << " is found" << std::endl;
				account_info_file.close();
				return true;
			}
		}
		std::cout << "Account password " << user_log_in_input << " is not found" << std::endl;
		account_info_file.close();
		return false;
	}
	std::cout << "Error nothing happens in check_account_info_duplication" << std::endl;
	account_info_file.close();
	return true;

}

std::string Account::log_in_account()
{
	
	while (true)
	{
		std::string account_name_val = ask_account_name();
		std::string account_password_val = ask_account_password();

		if (check_account_info_duplciate("account_name", account_name_val)
			&& check_account_info_duplciate("account_password", account_password_val))
		{
			std::cout << "Welcome! You are successfully log in!" << std::endl;
			return account_name_val;
		}
		std::cout << "Sorry. Account name and password do not match. Try again" << std::endl;
	}
	
}

std::string Account::ask_account_name()
{
	std::string account_name_val{ "" };
	std::cout << "Enter your account name : ";
	std::cin >> account_name_val;
	return account_name_val;
}

std::string Account::ask_account_password()
{
	std::string account_pasword_val{ "" };
	std::cout << "Enter your account password : ";
	std::cin >> account_pasword_val;
	return account_pasword_val;
}



Account Account::get_account_info(std::string account_name_val)
{
	std::ifstream account_info_file("Account_info.txt");
	std::string account_unique_number_val, account_name_value, account_password_val;
	double account_balance_val;

	while (!account_info_file.eof())
	{
		account_info_file >> account_unique_number_val;
		account_info_file >> account_name_value;
		account_info_file >> account_password_val;
		account_info_file >> account_balance_val;

		if (account_name_val == account_name_value)
		{
			account_info_file.close();
			return Account(account_unique_number_val, account_name_val, account_password_val, account_balance_val);
		}
	}
	account_info_file.close();
}

void Account::show_account_info()
{
	std::cout << "\n\n***********************************" << std::endl;
	std::cout << "********ACCOUNT INFORMATION********" << std::endl;
	std::cout << "***********************************\n" << std::endl;
	std::cout << "ACCOUNT NAME : " << get_account_name() << std::endl;
	std::cout << "ACCOUNT BALANCE : " << get_account_balacne() << std::endl;
}

double Account::deposit_amount() const
{
	double deposit_amount = { 0 };
	ask_amount("deposit");
	// need to valid check for double
	// need to make a function for check double and reuse it over and over
	std::cin >> deposit_amount;

	return deposit_amount;
}

void Account::ask_amount(std::string user_choice) const
{
	std::cout << "How much do you want to " << user_choice << "? : ";
}

bool Account::is_enough_balance(double user_balance)
{
	if (user_balance <= account_balance)
	{
		account_balance -= user_balance;
		std::cout << "You have enough balance" << std::endl;
		return true;
	}
	std::cout << "Sorry. You do not have enough balacne" << std::endl;
	return false;
}