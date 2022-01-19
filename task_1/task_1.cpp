/*
1. Написать программу, которая выводит на экран равнобедренный
треугольник. При этом пользователь вводит высоту треугольника.
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	setlocale(LC_ALL, ""); // работает только с потоком вывода

	cout << "Введите высоту равнобедренного треугольника: " << endl;
	int height{ 0 };
	cin >> height;

	int i{ 0 }, j{ 0 };

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < height; j++)
		{
			if (i == (height - 1) / 2 || // нижняя линия
				j == height / 2 + i || // правая линия
				j == height / 2 - i // левая линия
				)
				cout << "* ";
			else
				cout << "  ";
		}
		cout << "\n";
	}

	return 0;
}