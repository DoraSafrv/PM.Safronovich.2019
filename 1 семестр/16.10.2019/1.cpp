#include <iostream>
#include <math.h>
#include "MenuFunctions.h"

using namespace std;
void menu();
void workWithConsole();
int primeNumber();
void primeNumberTests(int, char);

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
			runTests();
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

int primeNumber(int number)
{
	
	for (int i = 2; i <= sqrt(number); i++)
	{
		if (number % i == 0)
		{
			cout << "Not Prime" << endl;
			char notprime; 
			return 0;
		}
	}
	char prime;
	cout << "Prime" << endl;
	system("pause");
	return 0;
}

void runTests()
{
	int testNumber = 1;

	primeNumberTests (testNumber++, 13, char );
	
}

void primeNumberTests(int number)
{
	int number = 2;
	char (prime);

	if (actual1 == expected1 && actual2 == expected2 && actual3 == expected3)
	{
		cout << "Case #" << testCaseNumber << " is correct. :)" << endl;
	}
	else
	{
		cout << "Case #" << testCaseNumber << " IS NOT CORRECT. :(" << endl;
		cout << "\t actual = " << actual << ", but expected = " << expectedCount << endl;
	}
}
