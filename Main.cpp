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

	cout << "����� ���� ����� ����� = " << Otvet << endl;

}

int main()
{
/* 
	��.
	�������� ���������, ������� ������� ����� ���� ����� �������� ����� � ���������, ��������� ������������.
*/
	setlocale(LC_ALL, "ru");

	int Nachalo;
	int Konec;
	int Vibor = 5;

	cout << "������� ������" << endl;
	cin >> Nachalo;
	system("CLS");

	cout << "������� �����" << endl;
	cin >> Konec;
	system("CLS");

	while (Vibor > 2 || Vibor < 1)
	{
		cout << "1 ���� �� ������, 2 ���� ������" << endl;
		cin >> Vibor;
		system("CLS");
		cout << "�� ���� " << Vibor << ". ��� �� �����! " << endl;
	}

	system("CLS");

	GetMegaEven(Nachalo, Konec, Vibor);


	//system("CLS");
	system("pause"); // ��� �� �� ����������� �������
}