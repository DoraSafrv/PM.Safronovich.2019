#include <iostream>

using namespace std;

int main()
{
	double a, b, c;

	cout << "enter the coeff.:"<< " \n";
	cout << "a= ";
	cin >> a;

	cout << "b= ";
	cin >> b;

	cout << "c= ";
	cin >> c;

	double min;

	if (true)
	{
		
		min = a < b ? a : b;
		min = a < c ? min : c;
	}
	cout << "min=" << min << "\n";
	return 0;
}
