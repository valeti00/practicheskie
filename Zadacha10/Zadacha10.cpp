// Zadacha10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	int a, n, res;
	cin >> a >> n;
	res = a;
	for (int i = 1; i < n; i++) {
		res = res*a;
			}
	cout << res;
	return 0;

}
