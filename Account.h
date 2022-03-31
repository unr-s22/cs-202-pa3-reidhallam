#pragma once
#include <iostream>
#include <vector>
#include "Money.h"
using namespace std;

class Account{
	public:
	Money initial;
	Money dBalance = Money(0, 0);
	Money wBalance = Money(0, 0);
	Money balance = Money(0, 0);
	vector<Money> deposits;
	vector<Money> withdrawals;

	Account(Money aInitial){
		aInitial = Money(300, 23);
		initial = aInitial;
	};

	void makeDeposit(Money dinero);
	void makeWithdrawals(Money skrilla);
	Money getBalance();
};

ostream& operator<<(ostream& out, Account& acc);
