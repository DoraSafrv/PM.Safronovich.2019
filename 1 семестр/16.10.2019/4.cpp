#include <iostream>
#include <math.h>

using namespace std;
void menuText();
void menu();
int enterNumber();
void runTest();
short enterDigit();


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
			runTest();
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

int main()
{
	menu();
	return 0;
}

void workWithConsole()
{
	short digit1 = enterDigit1();
	short digit2 = enterDigit2();
	int number = enterNumber();
	int i = numberOfDigits(number);
	int sum = logicChange(number, digit1, digit2, i);
	display(sum);
}

int enterNumber()
{
	int n;

	cout << "Enter number: ";
	cin >> n;

	return n;
}

short enterDigit1()
{
	short d;

	while (true)
	{
		cout << "Enter 0 < digit < 9 ";
		cin >> d;
		if (d >= 0 && d <= 9)
		{
			break;
		}
		cout << "Not didgits!" << endl;
		system("pause");
		system("cls");
	}

	return d;
}

short enterDigit2()
{
	short k;

	while (true)
	{
		cout << "Enter added digit (0..9):";
		cin >> k;
		if (k >= 0 && k <= 9)
		{
			break;
		}
		cout << "Not didgits! Try again." << endl;
		system("pause");
		system("cls");
	}

	return k;
}

void display(int sum)
{
	cout << sum << endl;
}

int numberOfDigits(int number)
{
	int i = 0;
	while (number != 0)
	{
		number = number / 10;
		i = i + 1;
	}
	return i;
}

int logicChange(int number, short digit1, short digit2, int i)
{
	int sum = 0;
	for (int a = 0; i > 0; i--)
	{
		a = n / pow(10, i - 1);
		if (a == d)
		{
			a = k;
			sum = 10 * (sum + a);
		}
		else
		{
			sum = 10 * (sum + a);
		}
		n = n % pow(10, i - 1);
	}
	sum = sum / 10;
	return sum;
}



void runTest()
{
	int testNumber = 1;
	test(testNumber++, 12345, 4, 3, 5, 12335);
	test(testNumber++, 111112, 1, 3, 6, 333332);
	test(testNumber++, 11, 1, 2, 2, 22);
	test(testNumber++, 1256342, 5, 2, 7, 1226342);
	test(testNumber++, 0, 0, 7, 1, 7);
}
void test(int testNumber, int n, short d, short k, int i, int sum)
{
	int actual = logicChange(n, d, k, i);
	if (actual == sum)
	{
		cout << "Case # " << testNumber << " is correct.\n";
	}
	else
	{
		cout << "Case # " << testNumber << " isn't correct.\n";
		cout << "Actual is " << act << " ,but expected " << sum << endl;
	}
}