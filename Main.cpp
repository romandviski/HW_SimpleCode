#include <iostream>
#include <string>

using namespace std;

int main()
{
/* 
	��.
	1. ����������� ���������, ������� ������� �� ����� ����� �� ��������. 
	����� ��������, ����� ������������ ������, � ����� ����� ����� - ������������, ��� �������������� - ��������� ������������.
	2. �������� ���������, ������� ������� ����� ���� ����� �������� ����� � ���������, ��������� ������������.
*/
	setlocale(LC_ALL, "ru");

	int Cifra1;
	char Simvol;
	int var;
	int index = 1;
	
	cout << "����� ������ ������������?" << endl;
	cin >> Simvol;
	system("CLS");

	cout << "������� ��������?" << endl;
	cin >> Cifra1;
	system("CLS");

	cout << "1 ���� �����������, 2 ���� ������������� =)" << endl;
	cin >> var;
	system("CLS");

	switch (var)
	{
	case 1:
		while (index <= Cifra1)
		{
			cout << Simvol << endl;
			index++;
		}
		break;
	case 2:
		while (index <= Cifra1)
		{
			cout << Simvol;
			index++;
		}
		break;
	default:
		system("CLS");
		cout << "�������� �����" << endl;
		break;
	}

	//system("CLS");
	//system("pause"); // ��� �� �� ����������� �������
}