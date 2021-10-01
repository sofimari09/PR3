// Lab_03_1.cpp
//Денисяк Софія-Марія
// Лабораторна робота № 3.1
//Розгалуження , задане формулою:функція однієї змінної.
//Варіант 0.4
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x;
	double y;
	double A;
	double B;
	cout << "x="; cin >> x;
	A = 1 + x;
	if (x <= 4)
		B = exp(log(2+2*x)+2*x);
	if (4 < x && x <= 7)
		B = 1/(tan((1 + x) / 9)+8*x);
	if (x > 7)
		B = 1 - 7 * x * x - 2 * x * x * x;
	y = A + B;
	cout << endl;
	cout << "y=" << y << endl;
	cin.get();
	return 0;
}