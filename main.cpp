#include <iostream>
#include <vector>
#include "Money.h"
#include "Account.h"
using namespace std;

int main(){
	
	Money m1;
	Account acc(m1);
	cout << acc;
	return 0;
}

