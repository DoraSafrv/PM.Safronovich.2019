#include <iostream>
using namespace std;

void equals(const int* lhs, int n, const int* rhs, int m);
void displayLhs(int* lhs, int n);
void displayRhs(int* rhs, int n);
int enterNum();

int main()
{
	int num; 
	cin >> num; 

	int* lhs = new int[num];
	for (int i = 0; i < num; i++)
	{
		lhs[i] = (rand() % num) + 1; 
	}

	displayLhs(lhs, num);

	int num1;
	cin >> num1;

	int* rhs = new int[num1];
	for (int i = 0; i < num1; i++)
	{
		rhs[i] = (rand() % num1) + 1;
	}

	displayRhs(rhs, num1);

	equals(lhs, num, rhs, num1);
}

int enterNum()
{
	int n;
	while (true)
	{
		cout << "Please enter number of terms in your array." << endl;
		cin >> n;
		if (n > 0)
		{
			break;
		}
		cout << "Number of terms can't be less than 0, please try again." << endl;
		system("pause");
		system("cls");
	}
	return n;
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
	if (num == num1)
	{
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
		}
	}
	cout << "Arrays are not equals";
}
