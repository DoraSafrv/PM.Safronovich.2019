#include <iostream>
using namespace std;

void equals(const char* lhs, int n, const char* rhs, int m);
void display(char* lhs, int n);

int main()
{
	int num;
	cin >> num;

	char* lhs = new char[num];
	for (int i = 0; i < num; i++)
	{
		cin >> lhs[i];
	}

	int num1;
	cin >> num1;
	char* rhs = new char[num1];
	for (int i = 0; i < num1; i++) 
	{
		cin >> rhs[i];
	}
	equals(lhs, num, rhs, num1);
}


void display(char* rhs, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << rhs[i] << " ";
	}
}

void equals(const char* lhs, int num, const char* rhs, int num1)
{
	int count = 0;
	if (num1 == num) 
	{
		for (int i = 0; i < num; i++) 
		{
			if (lhs[i] == rhs[i]) 
			{
				count++;
			}
		}
		if (num == count)
		{
			cout << "Arrays are equals";
		}
		else
		{
			cout << "Arrays are not equals";
		}
	}
	else if (num > num1)
	{
		cout << "lhs > rhs";
	}
	else if (num1 > num) 
	{
		cout << "lhs < rhs";
	}

}