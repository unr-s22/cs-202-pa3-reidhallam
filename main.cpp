#include <iostream>
#include <vector>
#include "Money.h"
#include "Account.h"
using namespace std;

int main(){
	
	Money m1, newBalance;
	Money m2 = Money(200, 10);
	Account acc(m1);
	newBalance = acc.makeDeposit(m2);
	cout << "$" << newBalance.dollars << ".";
	cout << newBalance.cents << endl;
	return 0;
}

