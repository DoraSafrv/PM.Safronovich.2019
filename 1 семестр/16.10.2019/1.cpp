#include <iostream>
#include <math.h>
#include "MenuFunctions.h"

using namespace std;
void menu();
void workWithConsole();
bool isPrimeNumber(int number);
void primeNumberTests(int actual1, const char* expected1);
void test();

int main()
{
	menu();
	return 0;
}

void menu()
{
	while (true)
	{
		char operation;
		menuText();
		cin >> operation;
		switch (operation)
		{
		case '1':
			workWithConsole();
			break;
		case '2':
			test();
			break;
		case '3':
			return;
		default:
			cout << "Invalid operation. Try again." << endl;
		}
		system("pause");
		system("cls");
	}
}

void workWithConsole()
{
	while (true)
	{
		int number;

		cout << "Please enter number = ";
		cin >> number;

		if (number < 1)
		{
			cout << "Please enter number > 1!";
			break;
		}
		primeNumber(number);
	}
}

bool isPrimeNumber(int number)
{
	if (number < 2)
	{
		return false;
    }

	for (int i = 2; i <= sqrt(number); i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}

	return true;
}

void primeNumberTests(int number, bool expected)
{
	if (isPrimeNumber(number) == expected)
	{
		cout << ":)" << endl;
	}
	else
	{
		cout << ":(" << endl;
	}
}

void test()
{
	primeNumberTests(7, true);
	primeNumberTests(8, false);
	primeNumberTests(2, true);
	primeNumberTests(-400, false);
	primeNumberTests(5, true);
	primeNumberTests(594583736282, false);
	primeNumberTests(-9870005, false);
	primeNumberTests(0, false);
}
