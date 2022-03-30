#include <iostream>
#include <vector>
#include "Account.h"
#include "Money.h"
using namespace std;

Money Account::makeDeposit(Money dinero){
	bool update;
	Money newBalance;
	vector<Money> deposits;
	if(dinero.dollars == 0 && dinero.cents == 0){
		update = false;}
	else{
		update = true;
		deposits.push_back(dinero);}
	if(update == true){
		newBalance = initial + dinero;
		return newBalance;}
};


