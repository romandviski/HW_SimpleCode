#include <iostream>
#include <string>

using namespace std;

int main()
{
	// ДЗ. Напишите программу, проверяющую число, введенное с клавиатуры на четность. 
	setlocale(LC_ALL, "ru");

	int Cifra;

	cout << "Введите число" << endl;
	cin >> Cifra;
	cout << endl;

	if (Cifra % 2 == 0)
	{
		cout << "Ваше число " << Cifra << ". Оно чётное." << endl;
	}
	else if (Cifra % 2 != 0)
	{
		cout << "Ваше число " << Cifra << ". Оно нечётное." << endl;
	}
	else // дебаг =)
	{
		cout << "Что-то пошло не так" << endl;
	}



	










	cout << endl;
	//system("pause"); // что бы не закрывалась консоль
}