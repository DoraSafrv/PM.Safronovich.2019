#include <iostream>

using namespace std;

int main()
{
	int n;

	while (true)
	{
		cout << "n = ";
		cin >> n;

		if (n >= 0 && n <= 10)
		{
			break;
		}
		else
		{
			cout << " enter n, 0 <= n <= 10, \n";
		}
	}
	switch (n)
	{
	case 0:
	case 1:
		cout << "was absent \n";
		break;

	case 2:
	case 3:
	case 4:
		cout << "not satisfactorily \n";
		break;

	case 5:
	case 6:
		cout << "satisfactorily \n";
		break;

	case 7:
	case 8:
		cout << "good \n";
		break;

	case 9:
	case 10:
		cout << "excellent \n";
		break;

	default:
		break;
	}

	system("pause");
	return 0;
}