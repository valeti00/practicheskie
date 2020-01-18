#include <iostream>
using namespace std;


int main()
{
	int s, l1, l2, r1, r2, i, j, x1, x2;
	cin >> s >> l1 >> r1 >> l2 >> r2;
	for (x1 = l1; x1 <= r1; x1++)
	{
		for (x2 = l2; x2 <= r2; x2++)
		{
		
			if (x1 + x2 == s)
			{
				cout << x1 << "\t" << x2 << "\n";
				return 0;
			}
		}
	}
	cout << -1;
}
