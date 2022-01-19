/*
4. Написать программу, которая выводят на экран, заполненный
звездочками ромб. При этом пользователь вводит диагональ ромба.
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	setlocale(LC_ALL, ""); // работает только с потоком вывода

	cout << "Введите диагональ ромба: " << endl;
	int diagonal{ 0 };
	cin >> diagonal;

	int i{ 0 }, j{ 0 };

	for (i = 0; i < diagonal; i++)
	{
		for (j = 0; j < diagonal; j++)
		{
			if (i >= j - diagonal / 2 && i >= diagonal - 1 - j - diagonal / 2 && i <= diagonal / 2 || // верхняя половина
				i <= j + diagonal / 2 && i <= diagonal - 1 - j + diagonal / 2 && i >= diagonal / 2 // нижняя половина
				)
				cout << "* ";
			else
				cout << "  ";
		}
		cout << "\n";
	}

	return 0;
}