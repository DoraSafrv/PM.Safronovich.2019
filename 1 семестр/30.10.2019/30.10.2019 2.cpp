#include <iostream>
#include <math.h>

using namespace std;
void menu();
void workWithConsole();
//void test();
void menuText();
int enterNum();
void displayArray(int*, int);
void newMassive(int*, int);

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
			//test();
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
	int const n = enterNum();
	int* array = new int[n];
	for (int i = 0; i < n; i++)
	{
		array[i] = i;
	}
	displayArray(array, n);
	newMassive(array, n);
	cout << endl;
	displayArray(array, n);
	system("pause");
}
void displayArray(int* array, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << " ";
	}
}
void newMassive(int*, int)
{
	if (array[i] = i < 2)
	{
	 
	}

	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
		
		}
	}
	
}
