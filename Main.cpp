// Hello, world!!!
#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	string Stroka = "Русишь?";
	int Cifra1 = 0, Cifra2 = 0, Cifra3 = 0;
	int Summa, Proizv;
	float Srednee;

	cout << "Введи 3 числа: ";
	cout << endl;
	cin >> Cifra1 >> Cifra2 >> Cifra3;
	cout << endl;

	Summa = Cifra1 + Cifra2 + Cifra3;
	Proizv = Cifra1 * Cifra2 * Cifra3;
	Srednee = (float)Summa / 3;


	cout << "Сумма: " << Summa << endl;
	cout << "Производная: " << Proizv << endl;
	cout << "Среднее: " << Srednee << endl;
	










	cout << endl;
	//system("pause"); // что бы не закрывалась консоль
}