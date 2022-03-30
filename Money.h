#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Money{
	public:
	int dollars, cents;

	Money(){
	};

	Money(int aDollars, int aCents){
		dollars = aDollars;
		cents = aCents;
	};

	/*friend ostream& operator<<(ostream& out, Money& buckaroos);
	friend Money operator+(Money& bucks, Money& scratch);
	friend Money operator-(Money& bucks, Money& scratch);
	friend bool operator<(Money& bucks, Money& scratch);
	friend bool operator>(Money& bucks, Money& scratch);
	friend bool operator==(Money& bucks, Money& scratch);
	friend bool operator!=(Money& bucks, Money& scratch);
	friend bool operator<=(Money& bucks, Money& scratch);
	friend bool operator>=(Money& bucks, Money& scratch);*/
};

ostream& operator<<(ostream& out, Money& buckaroos);
Money operator+(Money& bucks, Money& scratch);
Money operator-(Money& bucks, Money& scratch);
bool operator<(Money& bucks, Money& scratch);
bool operator>(Money& bucks, Money& scratch);
bool operator==(Money& bucks, Money& scratch);
bool operator!=(Money& bucks, Money& scratch);
bool operator<=(Money& bucks, Money& scratch);
bool operator>=(Money& bucks, Money& scratch);
