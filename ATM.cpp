#include "ATM.h"

void ATM::withdrawMoney(BankAccount* acc, int money)
{

	try
	{
		accCheck(acc, money);
		if (acc->getMoney()<money)
		{
			acc->setCreditMoney(money - acc->getMoney());
			acc->setMoney(0);
		}
		else
			acc->setMoney(acc->getMoney() - money);
	}
	catch (int a)
	{
		cout << "+++++++++++++++++++++++++++++++++++++++" << endl;
		cout << "Not enough of money!!!!!!" << endl;
		cout << "+++++++++++++++++++++++++++++++++++++++" << endl;
	}
}

void ATM::putMoney(BankAccount* acc, int money)
{
	if (acc->getCreditMoney() != acc->getCreditLimit())
	{
		acc->setMoney(money - (acc->getCreditLimit() - acc->getCreditMoney()));
		acc->setCreditMoney(0);
	}
	else
		acc->setMoney(acc->getMoney() + money);
}

void ATM::accCheck(BankAccount* acc, int money)
{
	if ((acc->getMoney() + acc->getCreditMoney()) < money)
	{
		throw 0;
	}
}

void ATM::chackBalance(BankAccount* acc)
{
	cout << "---------------------------------------" << endl;
	cout << "Money: " << acc->getMoney() << endl;
	cout << "Credit money use: : " << acc->getCreditLimit()-acc->getCreditMoney() << endl;
	cout << "Credit limit: " << acc->getCreditLimit() << endl;
	cout << "---------------------------------------" << endl;
}
