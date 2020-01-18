// Zadacha11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	int n, result;
	 
	cin >> n;
	result = 1;
	for (int i = 1; i <= n; i++) {
		result *= i;
	}
	cout << result;
	return 0;
}
