#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Account {
public:

	string account_name;
	int balance;

	void withdraw(int bal)
	{
		balance -= bal;
	}
	void deposit(int bal)
	{
		balance += bal;
		cout << balance;
	}

};

int main() {

	Account Conor_Griffin;
	Conor_Griffin.account_name = "Conor Griffin's Account";
	Conor_Griffin.balance = 5000;
	Conor_Griffin.withdraw(500);
	Conor_Griffin.deposit(5000);
}