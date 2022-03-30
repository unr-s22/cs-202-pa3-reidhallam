#pragma once
#include <iostream>
#include <vector>
#include "Money.h"
using namespace std;

class Account{
	public:
	Money initial;

	Account(Money aInitial){
		aInitial = Money(300, 23);
		initial = aInitial;
	};

	Money makeDeposit(Money dinero);/*{
		bool update;
		Money newBalance;
		vector<Money> deposits;
		if(dinero.dollars == 0 && dinero.cents == 0){
			update = false;}
		else{
			update = true;
			deposits.push_back(dinero);}
		if(update == true){
			newBalance = initial + dinero;}
	};*/
	void makeWithdrawals(Money skrilla);
};
