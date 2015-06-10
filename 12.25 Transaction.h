#include <string>
#include<vector>
#ifndef  TRANSACTION_H
#define  TRANSACTION_H
using namespace std;
class Transaction{
private:
	int date;
	char type;
	double amount;
	double balance;
	string description;
public:
	Transaction();
	Transaction(char newtype, double newamount, double newbalance, string newdescription);
	int getdate();
	char gettype();
	double getamount();
	double getbalance();
	string getdescription();
	void display();



};
#endif
