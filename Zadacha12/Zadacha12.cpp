#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int a, i = 2;
	cin >> a;

	if (a > 0)
	{

		if (a == 1)
		{
			cout << "не простое и не составное";
			return 0;
		}

		for (i; i < a; i++)
		{
			if (a % i == 0)
			{
				cout << "составное";
				return 0;
			}
		}
		cout << "простое";

	}
	else
	{
		cout << "Введено отрицательное число";
	}
}