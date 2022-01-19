/*
5. Написать программу, которая выводит на экран следующее
изображение.
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	setlocale(LC_ALL, ""); // работает только с потоком вывода

	cout << "Введите высоту бабочки: " << endl;
	int height{ 0 };
	cin >> height;

	int i{ 0 }, j{ 0 };

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < height; j++)
		{
			if (j == height / 2 // центральная линия (вертикальная)
				//|| i == height / 2 // центральная линия (горизонтальная)
				//|| i == j // главная диагональ
				//|| i == height - 1 - j // побочная диагональ
				|| i >= j && i <= height - 1 - j // закрашенное левое крыло
				|| i >= height - 1 - j && i <= j // закрашенное правое крыло
				)
				cout << "* ";
			else
				cout << "  ";
		}
		cout << "\n";
	}

	return 0;
}