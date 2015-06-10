#include "12.25 Account.h"
#include "12.25 Transaction.h"
#include <vector>
using namespace std;
Account::Account(){
	id = 0;
	balance = 0;
	anualInterestRate = 0;

}
Account::Account(string newname, int newid, double newbalance){
	name = newname;
	id = newid;
	balance = newbalance;
}
int Account::getid(int id){
	return id;
}
double Account::getbalance(double balance){
	return balance;
}
double Account::setanualInterestRate(double anualInterestRate){
	return anualInterestRate;
}
string Account::getname(string name){
	return name;
}
double Account::getMonthlyInterestRate(){
	double MonthlyInterestRate;
	MonthlyInterestRate = (anualInterestRate / 12) * 100;
	return MonthlyInterestRate;

}
void Account::withdraw(int amount){
	balance = balance - amount;
	cout << "Enter description of withdrawl: " << endl;
	string description;
	cin >> description;

	tran.push_back(Transaction('W', amount, balance, description));
	
	



}
void Account::deposit(int amount){
	balance = balance + amount;
	cout << "Enter description of deposit: " << endl;
	string description;
	cin >> description;
	
	tran.push_back(Transaction('D', amount, balance, description));
	


}