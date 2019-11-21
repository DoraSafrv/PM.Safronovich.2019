#include <iostream>

using namespace std;

int enterNumber();
void test();
void menu();
bool workWithConsole(int buffer);
void runTests(int number, int result, bool expected);
void menuText();
int reverse(int number);


int main()
{
	int number;
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
			workWithConsole (true);
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

void menuText()
{
	cout << "Press 1 to work with the console." << endl;
	cout << "Press 2 to run tests." << endl;
	cout << "Press 3 to exit." << endl;
}

bool workWithConsole(int buffer)
{
	int number = enterNumber();


	if ( number == reverse(buffer))
	{
		cout << "True";
		return true;
	}
	else
	{
		cout << "False";
		return false;
	}

	system("pause");
	
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

	while ( number > 0 )
	{
		buffer = buffer * 10 + number % 10;
		number /= 10;
	}

	return buffer;
}

void runTests(int buffer,int result, bool expected)
{

	bool localExpected = false;

	if (result == reverse(buffer))
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
	runTests(414, 414, true);
	runTests(1, 1, true);
	runTests(55, 55, true);
	runTests(4, 555, false);
	runTests(46564, 46564, true);
	runTests(78, 3, false);
	runTests(-53478, 5, false);
	runTests(-400, 5, false);
}