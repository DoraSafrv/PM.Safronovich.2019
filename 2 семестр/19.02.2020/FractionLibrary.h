#pragma once

#include "ctime"
#include <iostream>

using namespace std;

class RationalFraction 
{
	private:

	public:
		int numerator, denomenator;

	int NOD()
{
	int numerator, denomenator;

	while (numerator > 0 && denomenator > 0)

	if (numerator > denomenator)
	{ 
		numerator %= denomenator;
	}
	else
	{
	denomenator %= numerator;
	}
	
	NOD = numerator + denomenator;
	
	return NOD;
};

	RationalFraction(int a, int b)
{
	if (b == 0)
	{
		throw invalid_argument("You can't divide by zero");
	}

	numerator = a;
	denomenator = b;

	int t = NOD();
	numerator = a / t;
	denomenator = b / t;
}

	void enter()
	{
		cout << "Enter the Numerator -";
		cin >> numerator;

		cout << "Enter the Denominator -";
		cin >> denomenator;

		while (denomenator == 0)
		{
			system("cls");
			cout << "Enter Denominator not equal 0";

			cout << "Enter the Numerator -";
			cin >> numerator;
			cout << "Enter the Denominator -";
			cin >> denomenator;
		}
		
		int t = NOD();
		numerator = a / t;
		denomenator = b / t;
	}
	
	void display()
	{
			cout << numerator << "/" << denomenator;
	}
	





}
