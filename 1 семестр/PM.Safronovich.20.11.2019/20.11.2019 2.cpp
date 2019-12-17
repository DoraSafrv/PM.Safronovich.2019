#include <iostream>
using namespace std;

void equals(const int* lhs, int n, const int* rhs, int m);
void displayLhs(int* lhs, int n);
void displayRhs(int* rhs, int n);

int main()
{
	int num;
	cin >> num;
	system("cls");

	int* lhs = new int[num];
	for (int i = 0; i < num; i++)
	{
		lhs[i] = (rand() % num) + 1;
	}

	displayLhs(lhs, num);

	int num1;
	cin >> num1;
	system("cls");

	int* rhs = new int[num1];
	for (int i = 0; i < num1; i++)
	{
		rhs[i] = (rand() % num1) + 1;
	}

	displayRhs(rhs, num1);

	equals(lhs, num, rhs, num1);
}

void displayLhs(int* lhs, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << lhs[i] << " ";
	}
}

void displayRhs(int* rhs, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << rhs[i] << " ";
	}
}

void equals(const int* lhs, int num, const int* rhs, int num1)
{
	int count = 0;

	for (int i = 0; i < num; i++)
	{
		if (lhs[i] == rhs[i])
		{
			count++;
		}
	}
	if (count == num)
	{
		cout << "Arrays are equals";
		system("pause");
	}
	for (int i = 0; i < num; i++)
	{
		if (lhs[i] > rhs[i])
		{
			count++;
		}
	}
	if (count > num / 2 || num > num1)
	{
		cout << "lhs > rhs";
		system("pause");
	}
	else
	{
		cout << "lhs < rhs";
		system("pause");
	}
}
