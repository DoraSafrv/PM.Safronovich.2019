#include <iostream>
#include <math.h>
#include "MenuFunctions.h"

using namespace std;
void menu();
void workWithConsole();
const char* primeNumber(int number);
void primeNumberTests(int actual1, const char* expected1);
void TEST();

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
			TEST();
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

const char* primeNumber(int number)
{
	const char* answer1;
	if (number == 2 || number == 3)
	{
		cout << "Prime" << endl;
		answer1 = "Prime";
		return answer1;
	}
	for (int i = 2; i <= sqrt(number); i++)
	{
		if (number != 3 && number % 3 == 0)
		{
			cout << "Not prime" << endl;
			answer1 = "Not";
			return answer1;
		}
		if (number % i == 0)
		{
			cout << "Not Prime" << endl;
			answer1 = "Not";
			return answer1;
		}
		else
		{
			cout << "Prime" << endl;
			answer1 = "Prime";
			return answer1;
		}
	}
}

void primeNumberTests(int actual1, const char* expected1)
{
	const char* PRIME1;
	PRIME1 = primeNumber(actual1);
	if (PRIME1 == expected1)
	{
		cout << "Number: " << actual1;
		cout << endl;
		cout << "Expected answer: " << expected1 << endl;
		cout << "This is correct. :)" << endl;
		cout << endl;
	}
	else
	{
		cout << "This is incorrect. :(" << endl;
		cout << "Actual = " << actual1 << ", but expected is  " << expected1 << endl;
		cout << endl;
	}
}

void TEST()
{
	primeNumberTests(7, "Prime");
	primeNumberTests(8, "Not");
	primeNumberTests(2, "Prime");
	primeNumberTests(4, "Not");
	primeNumberTests(5, "Prime");
}
