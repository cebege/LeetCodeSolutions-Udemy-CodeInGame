#include "Header Practice.h"
#include <string>
#include <iostream>

using namespace std;

void Account::set_name(string input_name){
	name = input_name;
}

string Account::get_name(){
	return name;
}

void Account::set_balance(int bal){
	balance = bal;
}

int Account::get_balance(){
	return balance;
}

void Account::deposit(int bal){
	balance += bal;
}

void Account::withdrawal(int bal){
	balance += bal;
}


