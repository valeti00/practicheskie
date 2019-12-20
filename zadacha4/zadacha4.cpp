// zadacha4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{

	setlocale(LC_ALL, "RUS");
	int a, b, c;
	cout << "Введите a и b" << endl;
	cin >> a >> b;
	c = a;
	a = b;
	b = c;
	cout << "a=" << a << " b=" << b << "\n";

	cout << "Введите a и b" << endl;
	cin >> a >> b;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "a=" << a << " b=" << b << "\n";
	return 0;
}