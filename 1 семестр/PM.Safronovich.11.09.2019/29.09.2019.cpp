
#include <iostream>

using namespace std;

int main()
{
	double a, b, c;
	char ok = 'y';

	while (ok == 'y')
	{
		while (true)
		{
			cout << "Enter the side lenghts.\n";
			cin >> a;
			cin >> b;
			cin >> c;

			if ((a + b > c || a + c > b || b + c > a))
			{
				break;
			}
			
			else
			{
				cout << "Not triangle.\n";
				system("pause");
				system("cls");
			}
		}
		
		if (a == b && b == c)
		{
			cout << "Triangle is equilateral.\n";
		}
		
		else if (a == b || a == c || c == b)
		{
			cout << "Triangle is isosceles.\n";
		}

		else
		{
			cout << "Triangle versatile.\n";
		}

		cout << "Press 'y' to continue.\n";
		cin >> ok;
		system("pause");
		system("cls");
	}

	return 0;
}

