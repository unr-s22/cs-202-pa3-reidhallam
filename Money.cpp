#include <iostream>
#include <vector>
#include "Money.h"
using namespace std;

ostream& operator<<(ostream& out, Money& buckaroos){
	out << "$" << buckaroos.dollars;
	if(buckaroos.cents < 10){
	out << ".0" << buckaroos.cents << "\n";}
	else if(buckaroos.cents >= 10){
	out << "." << buckaroos.cents << "\n";}
	return out;
}

Money operator+(Money& bucks, Money& scratch){
	int bit = 0;
	Money sum;
	sum.cents = bucks.cents + scratch.cents;
	if(sum.cents > 99){
		sum.cents = sum.cents - 100;
		bit = 1;}
	sum.dollars = bucks.dollars + scratch.dollars + bit;
	return sum;
}

Money operator-(Money& bucks, Money& scratch){
	int bit = 0;
	Money difference;
	if(bucks.cents >= scratch.cents){
		difference.cents = bucks.cents - scratch.cents;}
	else{
		difference.cents = 100 - (-1*(bucks.cents - scratch.cents));
		bit = 1;}

	difference.dollars = bucks.dollars - scratch.dollars - bit;
	return difference;
}

bool operator<(Money& bucks, Money& scratch){
	if(((bucks.dollars*100) + bucks.cents) < ((scratch.dollars*100) + scratch.cents)){
		return true;}
	else{
		return false;}
}

bool operator>(Money& bucks, Money& scratch){
	if(((bucks.dollars*100) + bucks.cents) > ((scratch.dollars*100) + scratch.cents)){
		return true;}
	else{
		return false;}
}

bool operator==(Money& bucks, Money& scratch){
	if(((bucks.dollars*100) + bucks.cents) == ((scratch.dollars*100) + scratch.cents)){
		return true;}
	else{
		return false;}
}

bool operator!=(Money& bucks, Money& scratch){
	if(((bucks.dollars*100) + bucks.cents) != ((scratch.dollars*100) + scratch.cents)){
		return true;}
	else{
		return false;}
}

bool operator<=(Money& bucks, Money& scratch){
	if(((bucks.dollars*100) + bucks.cents) <= ((scratch.dollars*100) + scratch.cents)){
		return true;}
	else{
		return false;}
}

bool operator>=(Money& bucks, Money& scratch){
	if(((bucks.dollars*100) + bucks.cents) >= ((scratch.dollars*100) + scratch.cents)){
		return true;}
	else{
		return false;}
}




