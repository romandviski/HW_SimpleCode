#include <iostream>
#include <string>

using namespace std;

int main()
{
	// ��. �������� ���������, ����������� �����, ��������� � ���������� �� ��������. 
	setlocale(LC_ALL, "ru");

	int Cifra;

	cout << "������� �����" << endl;
	cin >> Cifra;
	cout << endl;

	if (Cifra % 2 == 0)
	{
		cout << "���� ����� " << Cifra << ". ��� ������." << endl;
	}
	else if (Cifra % 2 != 0)
	{
		cout << "���� ����� " << Cifra << ". ��� ��������." << endl;
	}
	else // ����� =)
	{
		cout << "���-�� ����� �� ���" << endl;
	}



	










	cout << endl;
	//system("pause"); // ��� �� �� ����������� �������
}