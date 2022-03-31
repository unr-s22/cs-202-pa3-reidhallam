#include <iostream>
#include <vector>
#include "Account.h"
#include "Money.h"
using namespace std;

void Account::makeDeposit(Money dinero){
	bool update;
	//Money dBalance(0, 0);
	if(dinero.dollars == 0 && dinero.cents == 0){
		update = false;
		/*return initial;*/}
	else{
		update = true;
		deposits.push_back(dinero);}
	if(update == true){
		for(int i = 0; i < deposits.size(); i++){
			dBalance = dBalance + deposits[i];}
		//return dBalance;}
		}
}

void Account::makeWithdrawals(Money skrilla){
	bool update;
	//Money wBalance(0, 0);
	if(skrilla.dollars == 0 && skrilla.cents == 0){
		update = false;
		/*return initial;*/}
	else{
		update = true;
		withdrawals.push_back(skrilla);}
	if(update == true){
		for(int i = 0; i < withdrawals.size(); i++){
			wBalance = wBalance + withdrawals[i];}
		//return wBalance;}
		}
}

Money Account::getBalance(){
	balance = dBalance - wBalance;
	balance = balance + initial;
	return balance;
}

ostream& operator<<(ostream& out, Account& acc){
	out << "Account Details\n--------------------------\nCurrent Balance: ";
	out << acc.balance;
	out << "--------------------------\nNumber of Deposits: ";
	out << acc.deposits.size() << "\n";
	out << "--------------------\n";
	for(int i1 = 0; i1 < acc.deposits.size(); i1++){
		out << "(" << i1+1 << ") ";
		out << acc.deposits[i1];}
	out << "--------------------\n";
	out << "Number of Withdrawals: ";
	out << acc.withdrawals.size() << "\n";
	out << "--------------------\n";
	for(int i2 = 0; i2 < acc.withdrawals.size(); i2++){
		out << "(" << i2+1 << ") ";
		out << acc.withdrawals[i2] << "\n";}
}




