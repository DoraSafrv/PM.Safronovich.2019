#include <iostream>
#include <math.h>

using namespace std;
void menu();
void workWithConsole();
void unityCounterTest(int number, char symbol, int result, bool expected);
void test();
int counterHEX(int number, char symbol);
void menuText();

int main()
{
	menu();
	return 0;
}

void menuText()
{
	cout << "Press 1 to work with the console." << endl;
	cout << "Press 2 to run tests." << endl;
	cout << "Press 3 to exit." << endl;
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

		if (number < 0)
		{
			cout << "Please enter number > 0!";
			break;
		}
		char symbol;
		cin >> symbol;
		cout << counterHEX(number, symbol);
	}

}

int counterHEX(int number, char symbol)
{
	int digit;
	switch (symbol)
	{
		case '0': digit = 0; break;
		case '1': digit = 1; break;
		case '2': digit = 2; break;
		case '3': digit = 3; break;
		case '4': digit = 4; break;
		case '5': digit = 5; break;
		case '6': digit = 6; break;
		case '7': digit = 7; break;
		case '8': digit = 8; break;
		case '9': digit = 9; break;
		case 'A': digit = 10; break;
		case 'B': digit = 11; break;
		case 'C': digit = 12; break;
		case 'D': digit = 13; break;
		case 'E': digit = 14; break;
		case 'F': digit = 15; break;
	}

	int counter = 0;

	while (number > 0)
	{
		if (number % 16 == digit)
			counter++;

		number /= 16;
	}

	return counter;
}

void unityCounterTest(int number, char symbol, int result, bool expected)
{
	bool localExpected = false;
	if (result == counterHEX(number, symbol))
	{
		localExpected = true;
	}
	if (localExpected == expected)
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
	unityCounterTest(14, 'A', 0, true);
	unityCounterTest(8, 5, 2, false);
	unityCounterTest(55,9, 1, false);
	unityCounterTest(4,'D' ,555, false);
	unityCounterTest(32564,6, 4, false);
	unityCounterTest(78,1, 3, false);
	unityCounterTest(-53478,3, 5, false);
	unityCounterTest(-400, 5,6, false);
}