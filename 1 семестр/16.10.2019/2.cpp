#include <iostream>

using namespace std;

int enterNumber();
void displayResult(int, short, int);
void countTests(int, int, short, short, short);
void menu();
void workWithConsole();
void runTests();
void menuText();


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

	if (number == reverse(number))
		cout << "True";
	else
		cout << "False";

	system("pause");
	return 0;
}

int enterNumber()
{
	int number;
	cout << "number = "; 
	cin >> number;

	return number;
}

int reverse(int number)
{
	int buffer = 0;

	while (number > 0)
	{
		buffer = buffer * 10 + number % 10;
		number /= 10;
	}

	return buffer;
}

void runTests()
{
	int testNumber = 1;

	countTests(testNumber++, );
	countTests(testNumber++,);

}

void countTests()
{

	if ()
	{
		cout << "Case #" << testCaseNumber << " is correct. :)" << endl;
	}
	else
	{
		cout << "Case #" << testCaseNumber << " IS NOT CORRECT. :(" << endl;
		//cout << "\t actual = " << actual << ", but expected = " << expectedCount << endl;
	}
}
