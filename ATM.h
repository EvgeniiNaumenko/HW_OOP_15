#pragma once
#include <iostream>
using namespace std;
#include "BankAccount.h"

class ATM
{
public:
	void withdrawMoney(BankAccount*, int);
	void putMoney(BankAccount*, int);
	void accCheck(BankAccount* ,int);
	void chackBalance(BankAccount*);
};

