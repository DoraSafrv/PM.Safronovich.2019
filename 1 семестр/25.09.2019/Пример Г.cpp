#include <iostream>

using namespace std;

int main()
{
	int n;

	double answer = 0.0;

	int i = 1;

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
	while (i <= n)
	{
		if (i % 2 != 0)
		{
			answer += 1 / (i * (i + 1));
		}
		else
		{
			answer -= 1 / (i * (i + 1));
		}

		i++;
	}
	cout << answer;

	system("pause");
	return 0;
}