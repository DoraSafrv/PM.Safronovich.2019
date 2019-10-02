#include <iostream>

using namespace std;

int main()
{
	int x_point, y_point;

	cout << "Enter x";
	cin >> x;
	cout << "Enter y";
	cin >> y;

	if (x > 0 && pow(x, 2) + pow(y, 2) <= 1)
	{
		cout << "The point belongs to the area";
	}
	else if (x<0 && x>= -1 && y >= -1 && y <= 1)
	{
		cout << "The point belongs to the area";
	}
	else
	{
		cout << "The point does not belongs to the area";
	}
	system("pause");
	return 0;
}

