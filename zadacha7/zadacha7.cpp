// zadacha7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "Способ нахождения площади: 1 - стороны, 2 - вершины" << endl;
	int vvod;
	cin >> vvod;

	if (vvod == 1)
	{
		double a, b, c, h, p, S;
		cout << "Введите a, b, c" << endl;
		cin >> a >> b >> c;


		p = (a + b + c) / 2;
		cout << "p= " << p << "\n";

		h = (2 * sqrt(p * (p - a) * (p - b) * (p - c))) / a;
		cout << "h= " << h << "\n";

		S = (a * h) / 2;
		cout << "S= " << S << "\n";


	}



	else if (vvod == 2)
	{
		int S, x1, x2, x3, y1, y2, y3;
		cout << "Введите x1, y1" << endl;
		cin >> x1 >> y1;
		cout << "Введите x2, y2" << endl;
		cin >> x2 >> y2;
		cout << "Введите x3, y3" << endl;
		cin >> x3 >> y3;
		S = ((x1 - x3) * (y2 - y3) - (x2 - x3) * (y1 - y3)) / 2;
		cout << "S=" << S << "\n";
	}

	return 0;

}
 