﻿#include <iostream>

using namespace std;

int main()
{
	int n;

	while (true)
	{
		cout << "n= ";
		cin >> n;

		if (n > 0 && n < 101)
		{
			break;
		}
		else
		{
			cout << " 0 < n < 101 \n";
		}
	}

	if (n > 99)
	{
		cout << "one hundred";
	}
	if (n > 19)
	{
		switch (n % 10)
		{
		case 2:
			cout << "twenty";
			break;

		case 3:
			cout << "thirty";
			break;

		case 4:
			cout << "forty";
			break;

		case 5:
			cout << "fifty";
			break;

		case 6:
			cout << "sixty";
			break;

		case 7:
			cout << "seventy";
			break;

		case 8:
			cout << "eighty";
			break;

		case 9:
			cout << "ninety";
			break;
		}

	}
	if (n < 10 || n>19)
	{
		switch (n % 100)
		{
		case 1:
			cout << "one";
			break;

		case 2:
			cout << "two";
			break;

		case 3:
			cout << "three";
			break;

		case 4:
			cout << "four";
			break;

		case 5:
			cout << "five";
			break;

		case 6:
			cout << "six";
			break;

		case 7:
			cout << "seven";
			break;

		case 8:
			cout << "eight";
			break;

		case 9:
			cout << "nine";
			break;
		}
	}
	else if (n > 9 && n < 20)
	{
		switch (n)
		{
		case 10:
			cout << "ten";
			break;

		case 11:
			cout << "eleven";
			break;

		case 12:
			cout << "twelve";
			break;

		case 13:
			cout << "thirteen";
			break;

		case 14:
			cout << "fourteen";
			break;

		case 15:
			cout << "fifteen";
			break;

		case 16:
			cout << "sixteen";
			break;

		case 17:
			cout << "seventeen";
			break;

		case 18:
			cout << "eighteen";
			break;

		case 19:
			cout << "nineteen";
			break;
		}
	}

	system("pause");
	return 0;
}
