#include <iostream>
#include <string>
#include <vector>
#include"12.25 Account.h"
#include "12.25 Transaction.h"
using namespace std;
int main(){
	Account Account1;

	Account1.setanualInterestRate(0.015);
	Account1.getbalance(1000);
	Account1.getid(1122);
	Account1.getname("George");
	
	Account1.deposit(30);
	
	Account1.deposit(40);
	Account1.deposit(50);

	
	Account1.withdraw(5);
	

	Account1.withdraw(4);
	

	Account1.withdraw(2);
	for (int i = 0; i < Account1.tran.size(); i++){
		Account1.tran[i].display();
	}
	

	



}