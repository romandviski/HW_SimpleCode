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

	float Cifra1, Cifra2;
	int var = 6;
	
	cout << "����� ���������� � ��������� \"���������� �����������\"" << endl << endl;
	cout << "������� 1 �����" << endl;
	cin >> Cifra1;
	cout << endl;
	cout <<
		"�������� ����� ��������: " << endl <<
		"1. ��������" << endl <<
		"2. ���������" << endl <<
		"3. ���������" << endl <<
		"4. �������" << endl;
		//"��� ������� ��� � ���������� (+ - * /)" <<endl;

	cout << endl;
	
		while (var > 4)
		{ 
			cout << "��� �����: ";
			cin >> var;
		}

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
		if (Cifra2 != 0)
		cout << "����� �����: " << (float)Cifra1 / Cifra2 << endl;
		else
		cout << "��... �� 0 ������ ������!" << endl;
		break;
	default:
		cout << endl;
		cout << "���� �����: " << var << ". �� �� ������ ��������� =) "<< endl;
		break;
	}

	cout << endl;
	//system("CLS"); // �������� �������
	//system("pause"); // ��� �� �� ����������� �������
}