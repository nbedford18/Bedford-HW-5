#include <iostream>
#include <string>
#include<vector>
#include "12.25 Transaction.h"
#ifndef Account_H
#define Account_H

using namespace std;
class Account{
private:
	int id;
	double balance;
	double anualInterestRate;
	string name;
public:
	Account();
	Account(string newname, int newid, double newbalance);
	int getid(int id);
	double getbalance(double balance);
	double setanualInterestRate(double anualInterestRate);
	double getMonthlyInterestRate();
	string getname(string name);
	vector<Transaction> tran;
	void withdraw(int amount);
	void deposit(int amount);
};
#endif