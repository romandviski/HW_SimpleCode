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

	int Cifra1, Cifra2;
	int var;
	
	cout << "Добро пожаловать в программу \"Бомжатский калькулятор\"" << endl << endl;
	cout << "Введите 1 число" << endl;
	cin >> Cifra1;
	cout << endl;
	cout << 
		"Выберите номер действия: " << endl <<
		"1. Сложение"  << endl <<
		"2. Вычитание" << endl <<
		"3. Умножение" << endl <<
		"4. Деление"   << endl;
	cout << endl;
	cout << "Ваш выбор: ";
	cin >> var;
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
		cout << "Ответ будет: " << (float)Cifra1 / Cifra2 << endl;
		break;
	default:
		cout << endl;
		cout << "Ваше число: " << var << ". Оно за гранью понимания =) "<< endl;
		break;
	}

	cout << endl;
	//system("pause"); // что бы не закрывалась консоль
}