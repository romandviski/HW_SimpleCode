#include <iostream>
#include <string>

using namespace std;

int main()
{
/* 
	��. �������� ������� �����������. ������������ ������ �������� ���� ����������. 
	������� ���� � ������� ��� �������������� �������� ��������, ���������, ���������, �������. 
	����� �������� switch ����������� �������������� �������� ��������������� ������ ����.
*/
	setlocale(LC_ALL, "ru");

	int Cifra1, Cifra2;
	int var;
	
	cout << "����� ���������� � ��������� \"���������� �����������\"" << endl << endl;
	cout << "������� 1 �����" << endl;
	cin >> Cifra1;
	cout << endl;
	cout << 
		"�������� ����� ��������: " << endl <<
		"1. ��������"  << endl <<
		"2. ���������" << endl <<
		"3. ���������" << endl <<
		"4. �������"   << endl;
	cout << endl;
	cout << "��� �����: ";
	cin >> var;
	cout << endl;
	cout << "������� 2 �����" << endl;
	cin >> Cifra2;
	
	switch (var)
	{
	case 1:
		cout << endl;
		cout << "����� �����: " << Cifra1 + Cifra2 << endl;
		break;
	case 2:
		cout << endl;
		cout << "����� �����: " << Cifra1 - Cifra2 << endl;
		break;
	case 3:
		cout << endl;
		cout << "����� �����: " << Cifra1 * Cifra2 << endl;
		break;
	case 4:
		cout << endl;
		cout << "����� �����: " << (float)Cifra1 / Cifra2 << endl;
		break;
	default:
		cout << endl;
		cout << "���� �����: " << var << ". ��� �� ������ ��������� =) "<< endl;
		break;
	}

	cout << endl;
	//system("pause"); // ��� �� �� ����������� �������
}