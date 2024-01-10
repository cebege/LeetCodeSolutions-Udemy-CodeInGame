// Write a program that provides the user with the amount of change they are to provide their customers when given an amount in cent.
// Dollar = 100
// Quarter = 25
// Dime = 10
// Nickel = 5
// Penny = 1

// Amount of cent = 92

#include <iostream>

using namespace std;

int main() {

	int cent{ 92 };

	int dollars;
	int quarters;
	int dimes;
	int nickels;
	int pennys;

	const int dollar_value{ 100 };
	const int quarter_value{ 25 };
	const int dime_value{ 10 };
	const int nickel_value{ 5 };
	const int penny_value{ 1 };

	// OPTION 1: Without Modular
	
	//int quarters_change;
	//int dimes_change;
	//int nickels_change;
	//int pennys_change;

	//dollars = cent / dollar_value;
	//cout << "Amount of dollars: " << dollars << endl;

	//quarters = cent / quarter_value;
	//cout << "Amount of quarters: " << quarters << endl;
	//quarters_change = cent - (quarters * quarter_value);
	//cout << "Amount of change remaining: " << quarters_change << endl;

	//dimes = quarters_change / dime_value;
	//cout << "Amount of dimes: " << dimes << endl;
	//dimes_change = quarters_change - (dimes * dime_value);
	//cout << "Amount of change remaining: " << dimes_change << endl;

	//nickels = dimes_change / nickel_value;
	//cout << "Amount of nickels: " << nickels << endl;
	//nickels_change = dimes_change - (nickels * nickel_value);
	//cout << "Amount of change remaining: " << nickels_change << endl;

	//pennys = nickels_change / penny_value;
	//cout << "Amount of pennys: " << pennys << endl;
	//pennys_change = nickels_change - (pennys * penny_value);
	//cout << "Amount of change remaining: " << pennys_change << endl;

	// OPTION 2: With Modular

	int balance;

	dollars = cent / dollar_value;
	balance = cent % dollar_value;
	cout << "Amount of Dollars: " << dollars << endl;
	cout << "Amount of change remaining: " << balance << endl;

	quarters = balance / quarter_value;
	balance %= quarter_value;
	cout << "Amount of quarters: " << quarters << endl;
	cout << "Amount of change remaining: " << balance << endl;

	dimes = balance / quarter_value;
	balance %= dime_value;
	cout << "Amount of dimes: " << dimes << endl;
	cout << "Amount of change remaining: " << balance << endl;

	nickels = balance / nickel_value;
	balance %= nickel_value;
	cout << "Amount of nickels: " << nickels << endl;
	cout << "Amount of change remaining: " << balance << endl;
	
	pennys = balance / penny_value;
	balance %= penny_value;
	cout << "Amount of pennys: " << pennys << endl;
	cout << "Amount of change remaining: " << pennys << endl;


}