#include <iostream>
using namespace std;
#include "ATM.h"
#include "BankAccount.h"

int main()
{
	BankAccount bankAcc("Bob", "Bobster", 4888877701553269, 30000);
	ATM bt; // bank terminal ��������)
	bt.chackBalance(&bankAcc); //�������� �������
	try
	{

		bt.withdrawMoney(&bankAcc, 20000); // ������� 20000 
		bt.chackBalance(&bankAcc); //�������� ������� ������� 10000

		bt.withdrawMoney(&bankAcc, 12000); // ������� 12000
		bt.chackBalance(&bankAcc); //�������� ������� ������� 0 � 2000 ������� ������������

		bt.withdrawMoney(&bankAcc, 10000); //  ������� 10000 � ����� ������ 8000
		//�������������� ������������ �����
		bt.chackBalance(&bankAcc); //�������� ������� ������ �� �����!!

		bt.putMoney(&bankAcc, -7000); //����� ������ �� ����
		bt.chackBalance(&bankAcc); //�������� ������� 5000 ������ ������ �������!!

		bt.putMoney(&bankAcc, 7000); //����� ������ �� ����
		bt.chackBalance(&bankAcc); //�������� ������� 12000
	}
	catch (const ArgumentException& ex) {

		cout << "Error: " << ex.what() << endl;
	}
	catch (const InsufficientFundsException& ex) {
		
		cout << "Error: " << ex.what() << endl;
	}
	return 0;
}