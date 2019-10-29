#include <iostream>
#include <math.h>

using namespace std;
void menu();
void workWithConsole();
void unityCounterTest(int number, int result, bool expected);
void test();
int count_1(int number);
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
		cout << count_1(abs(number)) << endl;

	}

}

int count_1(int number)
{
	int counter = 0;
	while (number > 0)
	{
		if (number % 2 != 1)
			counter++;

		number /= 2;
	}

	return counter;
}

void unityCounterTest(int number, int result, bool expected)
{
	bool localExpected = false;
	if (result == count_1(number))
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
	unityCounterTest(14, 1, true);
	unityCounterTest(8, 2, false);
	unityCounterTest(55, 1, true);
	unityCounterTest(4, 555, false);
	unityCounterTest(32564, 4, false);
	unityCounterTest(78, 3, true);
	unityCounterTest(-53478, 5, false);
	unityCounterTest(-400, 5, false);
}