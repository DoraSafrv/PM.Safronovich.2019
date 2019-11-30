#include <iostream>

using namespace std;

void menu();
void menuText();
void workWithConsole();
int enterNumber();
short digitsInNumber(int number);



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

void menuText()
{
	cout << "Press 1 to work with the console." << endl;
	cout << "Press 2 to run tests." << endl;
	cout << "Press 3 to exit." << endl;
}

void workWithConsole()
{
	int number = enterNumber();
	short digitsInNumber(int number);
}

int enterNumber()
{
	int number;

	while (true)
	{
		cout << "number = ";
		cin >> number;

		if (number <= 0)
		{
			cout << "number > 0! \n";
			system("pause");
			system("cls");
		}
		else
		{
			return number;
			break;
		}
	}
}

short digitsInNumber(int number)
{
	int i = 0;
	while (number != 0)
	{
		number = number / 10;
		i++;
	}
	return i;
}