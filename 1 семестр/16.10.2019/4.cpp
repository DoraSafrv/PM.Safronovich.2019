#include <iostream>
#include <math.h>

using namespace std;
void menuText();
void menu();


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

int main()
{
	menu();
	return 0;
}


short enterDigit()
{
	short d;

	while (true)
	{
		cout << "Enter digit (0..9):";
		cin >> d;
		if (d >= 0 && d <= 9)
		{
			break;
		}
		cout << "Not didgits! Try again." << endl;
		system("pause");
		system("cls");
	}

	return d;
}