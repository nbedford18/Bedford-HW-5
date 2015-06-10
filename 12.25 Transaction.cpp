#include "12.25 Transaction.h"
#include<iostream>
#include <cstring>
#include<cstdlib>
using namespace std;
Transaction::Transaction(){
	type = '0';
	amount = 0;
	balance = 0;
	description = "none";
}
Transaction::Transaction(char newtype, double newamount, double newbalance, string newdescription){
	type = newtype;
	amount = newamount;
	balance = newbalance;
	description = newdescription;

}
void Transaction::display(){

	cout <<"Transaction type: "<< gettype() << endl;
	cout << "Transaction amount: "<<getamount() << endl;
	cout << "End Balance: "<<getbalance() << endl;
	cout << "Description of Transaction: "<<getdescription() << endl;
}
int Transaction::getdate(){
	return date;
}
char Transaction::gettype(){
	return type;
}
double Transaction::getamount(){
	return amount;
}
double Transaction::getbalance(){
	return balance;
}
string Transaction::getdescription(){
	return description;
}