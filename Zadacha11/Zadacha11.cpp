// Zadacha11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;


void faktorial(int numb)
{
	int rezult = 1; 
	for (int i = 1; i <= numb; i++) 
		rezult *= i; 
	cout << numb <<"! = " << rezult << endl; 
}

int main(int argc, char* argv[])
{
	int digit; 
	cout << "Enter number: ";
	cin >> digit;
	faktorial(digit);
	system("pause");
	return 0;
}

