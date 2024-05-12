#include <iostream>
using namespace std;
#include "ATM.h"
#include "BankAccount.h"

int main()
{
	BankAccount bankAcc("Bob", "Bobster", 4888877701553269, 30000);
	ATM bt; // bank terminal сократил)
	bt.chackBalance(&bankAcc); //проверка баланса

	bt.withdrawMoney(&bankAcc, 20000); // снимаем 20000 
	bt.chackBalance(&bankAcc); //проверка баланса остаток 10000

	bt.withdrawMoney(&bankAcc, 12000); // снимаем 12000
	bt.chackBalance(&bankAcc); //проверка баланса остаток 0 и 2000 кредите использовано

	bt.withdrawMoney(&bankAcc, 10000); //  снимаем 10000 а можем только 80000
	//предупреждение недостаточно денег
	bt.chackBalance(&bankAcc); //проверка баланса деньги не сняты!!

	bt.putMoney(&bankAcc, 7000); //ложим деньги на счет
	bt.chackBalance(&bankAcc); //проверка баланса 5000 личные кредит не использован!!

	bt.putMoney(&bankAcc, 7000); //ложим деньги на счет
	bt.chackBalance(&bankAcc); //проверка баланса 12000
	return 0;
}