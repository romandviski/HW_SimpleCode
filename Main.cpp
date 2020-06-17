#include <iostream>
#include <string>

using namespace std;

int main()
{
/* 
	ДЗ.

*/
	setlocale(LC_ALL, "ru");

	int Cifra1;
	int var;
	int i = 0;
	
	//cout << "Добро пожаловать в программу \"Бомжатский калькулятор\"" << endl << endl;
	cout << "Сколько строк?" << endl;
	cin >> Cifra1;
	cout << endl;

	while (i < Cifra1)
	{
		cout << "Строка №" << i+1 << endl;
		i++;
	}

	cout << endl;
	//system("pause"); // что бы не закрывалась консоль
}