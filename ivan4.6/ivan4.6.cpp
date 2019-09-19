// ivan4.6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Найти решение системы линейных уравнений вида
//A1•x + B1•y = C1,
//A2•x + B2•y = C2,



#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float a1, x, b1, a2, b2, y, c1, c2, d, d1, d2;
	cout << "Введите коэффициенты a1 и b1 и c1 " << endl;
	cin >>a1>> b1>> c1;
	cout << "Введите коэффициенты a2 и b2 и c2" << endl;
	cin >> a2 >> b2>> c2;
	d = a1 * b2 - a2 * b1;
	d1 = c1 * b2 - c2 * b1;
	d2 = a1 * c2 - a2 * c1;
	x = d1 / d;
	y = d2 / d;

	cout << "x= " << x << endl;

	cout << "y= " << y << endl;

	return 0;
}