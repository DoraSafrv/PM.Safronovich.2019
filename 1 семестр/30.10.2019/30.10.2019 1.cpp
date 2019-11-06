#include <iostream>
#include <math.h>

using namespace std;
void menu();
void workWithConsole();
void test();
void menuText();
int enterNum();
void displayArray(int*, int);
int inverseMassive(int*, int);
void unityCounterTest(int*, int* result, bool expected);

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
	int const n = enterNum();
	int* array = new int[n];
	for (int i = 0; i < n; i++)
	{
		array[i] = i;
	}
	displayArray(array, n);
	inverseMassive(array, n);
	cout << endl;
	displayArray(array, n);
	system("pause");
}
int enterNum()
{
	int number;
	while (true)
	{
		cout << "Please enter number of terms in your array." << endl;
		cin >> number;
		if (number > 0)
		{
			break;
		}
		cout << "Number of terms can't be less than 0, please try again." << endl;
		system("pause");
		system("cls");
	}
	return number;
}

void displayArray(int* array, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << " ";
	}
}

int inverseMassive(int* array, int n)
{
	for (int i = 0; i < n / 2; i++)
	{
		int tmp = array[i];
		array[i] = array[n - 1 - i];
		array[n - 1 - i] = tmp;
	}
	return array[n];
}

//void test()
//{
//	unityCounterTest({ 1,2,3,4,5 }, { 5,4,3,2,1 }, true);
//	unityCounterTest({ 1,2,3,4,5,6,7,8,9 }, { 9,8,7,6,5,4,3,2,1 }, true);
//}

//void unityCounterTest(int*, int* result, bool expected)
//{
//	bool localExpected = false;
//	if (result == inverseMassive(array[n]) )
//	{
//		localExpected = true;
//	}
//	if (localExpected == expected)
//	{
//		cout << ":)" << endl;
//	}
//	else
//	{
//		cout << ":(" << endl;
//	}
//
//}