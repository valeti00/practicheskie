// Zadacha10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	double a, result;
	int n;
	cin >> a >> n;
	result = 1;
	for (int i = 1; i <= abs(n); i++)
 {
		result = result*a;
	}
	
	if (n < 0) {

		if (result == 0) 
			cout << "ОШИБКА";
		else
		cout << 1.0 / result;

	}
	else 
		cout << result;
}
