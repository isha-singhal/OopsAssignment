#include<iostream>
#include<stdio.h>
using namespace std;

class account {
private:
	int accountBalance;
public:
	account(int balance) {
		if (balance >= 0)
		{
			accountBalance = balance;
		} else {
			cout << "Balance is invalid .\n";
			balance = 0;
			accountBalance = balance;

		}
	}
	void Credit(int amount)
	{
		accountBalance += amount;

	}
	void Debit (int amount)
	{
		int temp = accountBalance - amount;
		if (temp > 0)
		{
			accountBalance -= amount;

		} else {
			cout << "Debit amount exceeded account balance. \n";
		}
	}
	int getBalance ()
	{
		return accountBalance;
	}

};
int main()
{

	int initialBalance;
	cout << "Enter the initial amount you want to start account1 with .\n";
	cin >> initialBalance;
	account account1(initialBalance);
	int add_amt;
	cout << "enter the amount you want to add in account1 . \n";
	cin >> add_amt;
	account1.Credit(add_amt);
	cout<<"current account1 balance is: ";
	cout << account1.getBalance() << "\n";
	double withdraw_amt;
	cout << "enter the amount you want to withdraw from account1 . \n";
	cin >> withdraw_amt;
	account1.Debit(withdraw_amt);
	cout<<"current account1 balance is: ";
	cout << account1.getBalance() << "\n";
	cout << "enter the initial amount you want to start account2 with .\n";
	cin >> initialBalance;
	account account2(initialBalance);
	cout << "enter the amount you want to add in account2 . \n";
	cin >> add_amt;
	account2.Credit(add_amt);
	cout<<"current account2 balance is: ";
	cout << account2.getBalance() << "\n";
	cout << "enter the amount you want to withdraw from account . \n";
	cin >> withdraw_amt;
	account2.Debit(withdraw_amt);
	cout<<"current account2 balance is: ";
	cout << account2.getBalance() << "\n";
	return 0;
}
