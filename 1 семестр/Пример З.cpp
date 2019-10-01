#include <iostream>

using namespace std;

int main()
{
	int numerator = 0;
	double denominator = 1.0;

	double sum = 0.0;

	int n;

	while (true)
	{
		cout << "n = ";
		cin >> n;

		if (n <= 0)
		{
			cout << "N > 0! \n";
			system("pause");
			system("cls");
		}
		else
		{
			break;
		}
	}

	int i = 1;

	while (i <= n)
	{
		sum += numerator / denominator;
		numerator *= i;
		denominator += 1 / i;

		i++;
	}

	cout << "sum = " << sum;

	system("pause");
	return 0;
}