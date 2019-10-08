#include <iostream>

using namespace std;

int main()
{
	int n;
	int a, b, c;

	while (true)
	{
		cout << "n= ";
		cin >> a; cin >> b; cin >> c;
		n = a * 100 + b * 10 + c;

		if (a < 2 && a >= 0)
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
		switch (b)
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
		switch (c)
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
		switch (b * 10 + c)
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
