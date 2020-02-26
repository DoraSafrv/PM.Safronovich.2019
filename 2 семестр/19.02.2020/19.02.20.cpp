#include <iostream>
#include "FractionLibrary.h"

using namespace std;

typedef RationalFraction(*Operation)(RationalFraction, RationalFraction);
RationalFraction sum(RationalFraction, RationalFraction);
RationalFraction product(RationalFraction, RationalFraction);

int main()
{
	RationalFraction expr1, expr2;
	cout << "Enter the first rational fraction." << endl;
	expr1.enter();
	cout << "Enter the second rational fraction." << endl;
	expr2.enter();

	sum(expr1, expr2).display();
}

RationalFraction sum(RationalFraction expr1, RationalFraction expr2)
{
	RationalFraction expr;
	expr.numerator = expr1.numerator * expr2.denomenator + expr2.numerator * expr1.denomenator;
	expr.denomenator = expr1.denomenator * expr2.denomenator;
	return expr;
}

RationalFraction product(RationalFraction, RationalFraction)
{

}