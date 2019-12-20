// zadacha18.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

const int n = 20;

int main()
{
	setlocale(LC_ALL, "RUS");

	srand(time(NULL));

	int mass[n], max, min;

	cout << "Числа: ";
	for (int r = 0; r < n; r++)
	{
		mass[r] = rand() % 202 - 101;
		cout << mass[r] << " ";
	}
	cout << endl;

	max = mass[0];
	min = mass[0];
	for (int r = 1; r < n; r++)
	{
		if (max < mass[r]) max = mass[r];
		if (min > mass[r]) min = mass[r];
	}
	cout << "Min: " << min << endl;
	cout << "Max: " << max << endl;

	return 0;
}



