// zadacha8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	double a, b, c;
	char x = '?';
	cin >> a;
	cin >> x;
	cin >> b;

	switch (x)
	{
	case '+': c = a + b;
	cout << "Ответ: " << c << '\n';
	break;
	
	case('-'): c = a - b;
	{ cout << "Ответ: " << c << '\n';
	break;
	}

	case('*'): c = a * b;
	{ cout << "Ответ: " << c << '\n';
	break;
	}
	case('/'): c = a / b;
		if (b == 0) {
			cout << "ОШИБКА";
		}
		else {
			cout << "Ответ: " << c << '\n';
		}
	
	break;
	
	default:
		cout << "Неверное значение" << "\n";
	
	}
}

