// Hello, world!!!
#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	string Stroka = "������?";
	int Cifra1 = 0, Cifra2 = 0, Cifra3 = 0;
	int Summa, Proizv;
	float Srednee;

	cout << "����� 3 �����: ";
	cout << endl;
	cin >> Cifra1 >> Cifra2 >> Cifra3;
	cout << endl;

	Summa = Cifra1 + Cifra2 + Cifra3;
	Proizv = Cifra1 * Cifra2 * Cifra3;
	Srednee = (float)Summa / 3;


	cout << "�����: " << Summa << endl;
	cout << "�����������: " << Proizv << endl;
	cout << "�������: " << Srednee << endl;
	










	cout << endl;
	//system("pause"); // ��� �� �� ����������� �������
}