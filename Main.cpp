#include <iostream>
#include <string>

using namespace std;

void GetMegaEven(int A, int N, int C)
{
	int Otvet = 0;
	if (A < N) {
		for (int i = A; i <= N; i++)
		{
			if (i % 2 == 0 && C == 2)
			{
				cout << i << endl;
				Otvet += i;
			}
			else if (i % 2 == 1 && C == 1)
			{
				cout << i << endl;
				Otvet += i;
			}
		}
	}
	else {
		for (int i = N; i <= A; i++)
		{
			if (i % 2 == 0 && C == 2)
			{
				cout << i << endl;
				Otvet += i;
			}
			else if (abs(i % 2) == 1 && C == 1)
			{
				cout << i << endl;
				Otvet += i;
			}
		}
	}

	cout << "Сумма всех чисел будет = " << Otvet << endl;

}

int main()
{
/* 
	ДЗ.
	Написать программу, которая находит сумму всех целых нечетных чисел в диапазоне, указанном пользователе.
*/
	setlocale(LC_ALL, "ru");

	int Nachalo;
	int Konec;
	int Vibor = 5;

	cout << "Введите начало" << endl;
	cin >> Nachalo;
	system("CLS");

	cout << "Введите конец" << endl;
	cin >> Konec;
	system("CLS");

	while (Vibor > 2 || Vibor < 1)
	{
		cout << "1 если не четные, 2 если четные" << endl;
		cin >> Vibor;
		system("CLS");
		cout << "Ты ввел " << Vibor << ". Это не верно! " << endl;
	}

	system("CLS");

	GetMegaEven(Nachalo, Konec, Vibor);


	//system("CLS");
	system("pause"); // что бы не закрывалась консоль
}