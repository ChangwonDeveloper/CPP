#pragma once
#include <string>
#include <vector>
class Account
{
public:
	static Account get_account_info(std::string account_name_val);
	static bool check_account_info_duplciate(std::string search_type, std::string user_log_in_input = "input");
	static std::string log_in_account();
	static std::string ask_account_name();
	static std::string ask_account_password();	

private:
	std::string account_unique_number;
	std::string account_name;
	std::string account_password;
	double account_balance;

public:
	Account();
	Account(std::string account_unique_number_val, std::string account_name_val, std::string account_password_val, double account_balance_val);
	~Account();
	std::string get_account_name() const { return account_name;}
	std::string get_account_password() const { return account_password;}
	double get_account_balacne() const { return account_balance; }
	std::string get_account_unique_number() const{ return account_unique_number; }
	std::string create_unique_number();
	std::string create_a_new_account_name();
	std::string create_a_new_account_password();
	double create_a_new_account_balance();
	void write_account_info(std::string account_unique_number_val, std::string account_name_val, std::string account_password_val, double account_balance_val);
	int get_account_number() const;
	void write_account_number() const;
	void show_account_info() const;
	double deposit_amount() const;
	void ask_amount(std::string user_choice) const;
	bool is_enough_balance(double user_balance);

};