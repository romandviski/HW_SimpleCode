#include <iostream>
#include <string>

using namespace std;

int main()
{
/* 
	ДЗ. Написать простой калькулятор. Пользователь вводит значение двух переменных. 
	Описать меню в консоли для математических операций сложения, вычитания, умножения, деления. 
	Через оператор switch реализовать математическую операцию соответствующую пункту меню.
*/
	setlocale(LC_ALL, "ru");

	float Cifra1, Cifra2;
	int var = 6;
	
	cout << "Добро пожаловать в программу \"Бомжатский калькулятор\"" << endl << endl;
	cout << "Введите 1 число" << endl;
	cin >> Cifra1;
	cout << endl;
	cout <<
		"Выберите номер действия: " << endl <<
		"1. Сложение" << endl <<
		"2. Вычитание" << endl <<
		"3. Умножение" << endl <<
		"4. Деление" << endl;
		//"или введите его с клавиатуры (+ - * /)" <<endl;

	cout << endl;
	
		while (var > 4)
		{ 
			cout << "Ваш выбор: ";
			cin >> var;
		}

	cout << endl;
	cout << "Введите 2 число" << endl;
	cin >> Cifra2;

	switch (var)
	{
	case 1:
		cout << endl;
		cout << "Ответ будет: " << Cifra1 + Cifra2 << endl;
		break;
	case 2:
		cout << endl;
		cout << "Ответ будет: " << Cifra1 - Cifra2 << endl;
		break;
	case 3:
		cout << endl;
		cout << "Ответ будет: " << Cifra1 * Cifra2 << endl;
		break;
	case 4:
		cout << endl;
		if (Cifra2 != 0)
		cout << "Ответ будет: " << (float)Cifra1 / Cifra2 << endl;
		else
		cout << "Эх... На 0 делить нельзя!" << endl;
		break;
	default:
		cout << endl;
		cout << "Ваше выбор: " << var << ". Он за гранью понимания =) "<< endl;
		break;
	}

	cout << endl;
	//system("CLS"); // очистить консоль
	//system("pause"); // что бы не закрывалась консоль
}