#include <iostream>
#include <string>

using namespace std;

int main()
{
/* 
	��.

*/
	setlocale(LC_ALL, "ru");

	int Cifra1;
	int var;
	int i = 0;
	
	//cout << "����� ���������� � ��������� \"���������� �����������\"" << endl << endl;
	cout << "������� �����?" << endl;
	cin >> Cifra1;
	cout << endl;

	while (i < Cifra1)
	{
		cout << "������ �" << i+1 << endl;
		i++;
	}

	cout << endl;
	//system("pause"); // ��� �� �� ����������� �������
}