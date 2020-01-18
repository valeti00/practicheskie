// zadacha7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "Способ нахождения площади: 1 - стороны, 2 - вершины" << endl;
	char x;
	cin >> x;

	switch (x)
	{
	case '1':
		double a, b, c, h, p, S1;
		cout << "Введите a, b, c" << endl;
		cin >> a >> b >> c;
		if (a <= 0 || b <= 0 || c <= 0 || (a + b) <= c || (b + c) <= a || (a + c) <= b) {
			cout << "Ошибка в значениях";
		}
		else {
		p = (a + b + c) / 2;
		h = (2 * sqrt(p * (p - a) * (p - b) * (p - c))) / a;
		S1 = (a * h) / 2;
		cout << "S= " << S1 << "\n";
		
		}
		break;
	case '2':
		int S2, x1, x2, x3, y1, y2, y3;
		cout << "Введите x1, y1" << endl;
		cin >> x1 >> y1;
		cout << "Введите x2, y2" << endl;
		cin >> x2 >> y2;
		cout << "Введите x3, y3" << endl;
		cin >> x3 >> y3;
		if ((x1 == x2 && x1 == x3) or (y1 == y2 && y2 == y3) or (x1 == x2 && y1 == y2) or (x2 == x3 && y1 == y3)) {
			cout << "Ошибка в значениях";
		}
		else {
			S2 = abs((x1 - x3) * (y2 - y3) - (x2 - x3) * (y1 - y3)) / 2;
			cout << "S=" << S2 << "\n";
		}
		break;

	default:
		cout << "Ошибка в знаке" << "\n";
	}
	return 0;

}
 