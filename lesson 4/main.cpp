/*
	lesson 4
	решение квадратного уравненич вида ax^2+bx+c=0
	обработка исключение ветвелнием!!!
	Хромов Иван
	09,06,2023
*/



#include <conio.h>
#include <iostream>
#include <math.h>

using std::cout;
using std::cin;
using std::endl;



int main()
{
	double a, b, c, d, x1, x2;
	cout << "Khromov Ivan" << endl;
	cout << "solving the quadratic equation" << endl;
	cout << "enter the coefficients a, b and c" << endl;
	cin >> a;
	cin >> b;
	cin >> c;

	if (a == 0)
	{
		cout << "error a=0" << endl;
		_getch();
		return 0;
	}
	d = (b * b) - (4 * a * c);
	if (d < 0)
	{
		cout << "there are no roots" << endl;
		_getch();
		return -1;
	}
	if (d == 0)
	{
		x1 = x2 = -b / (2 * a);
		cout << "x= " << x1 << endl;
		_getch();
		return 0;
	}
	x1 = (-b + sqrt(d)) / (2 * a);
	x2 = (-b - sqrt(d)) / (2 * a);
	cout << "x1= " << x1 << " x2= " << x2 << endl;
	_getch();
	return 0;

}