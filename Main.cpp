#include <iostream>
#include <string>

using namespace std;

int main()
{
/* 
	ДЗ.
	1. Разработать программу, которая выводит на экран линию из символов. 
	Число символов, какой использовать символ, и какая будет линия - вертикальная, или горизонтальная - указывает пользователь.
	2. Написать программу, которая находит сумму всех целых нечетных чисел в диапазоне, указанном пользователе.
*/
	setlocale(LC_ALL, "ru");

	int Cifra1;
	char Simvol;
	int var;
	int index = 1;
	
	cout << "Какой символ использовать?" << endl;
	cin >> Simvol;
	system("CLS");

	cout << "Сколько символов?" << endl;
	cin >> Cifra1;
	system("CLS");

	cout << "1 если вертикально, 2 если горизонтально =)" << endl;
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
		cout << "Неверный выбор" << endl;
		break;
	}

	//system("CLS");
	//system("pause"); // что бы не закрывалась консоль
}