#pragma once
#include <string>
#include <vector>
class Account
{
private:
	static std::vector<std::string> unique_number_list;
	static int account_number;
	static std::string account_info;
	std::string account_name;
	std::string account_password;
	std::string account_unique_number;
	double account_balance;

public:
	int get_account_number() const { return account_number;}
	std::string get_account_name() const { return account_name;}
	std::string get_account_password() const { return account_password;}
	double get_account_balacne() const { return account_balance; }
	std::string get_account_unique_number() const{ return account_unique_number; }
	Account();
	~Account();
	std::string create_unique_number();
	std::string create_a_new_account_name();
	std::string create_a_new_account_password();
	double create_a_new_account_balance();
	void write_account_info(std::string account_unique_number_val, std::string account_name_val, std::string account_password_val, double account_balance_val);
	

};

