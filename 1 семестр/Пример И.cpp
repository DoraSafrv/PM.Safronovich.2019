#include <iostream>

using namespace std;

int main()
{
	double sum = 0;

	int n;

	while (true)
	{
		cout << "n = ";
		cin >> n;

		if (n <= 0)
		{
			cout << "N>0! \n";
			system("pause");
			system("cls");
		}
		else
		{
			break;
		}
	}

	int i = 1.0;

	while (i <= n)
	{
		sum = sqrt(2 + sum);

		i++;
	}

	cout << "sum = " << sum;

	system("pause");
	return 0;
}