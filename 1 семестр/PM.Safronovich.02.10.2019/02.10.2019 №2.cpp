#include <iostream>

using namespace std;

int main()
{
	char ok = 't';
	while (ok == 't')
	{
		int n;

		cout << "n = ";
		cin >> n;

		switch (n)
		{
		case 1:
			cout << "december, winter \n";
			break;

		case 2:
			cout << "january, winter \n";
			break;

		case 3:
			cout << "February, winter \n";
			break;

		case 4:
			cout << "March, spring \n";
			break;

		case 5:
			cout << "April, spring \n";
			break;

		case 6:
			cout << "May, spring \n";
			break;

		case 7:
			cout << "June, summer \n";
			break;

		case 8:
			cout << "July, summer \n";
			break;

		case 9:
			cout << "August, summer \n";
			break;

		case 10:
			cout << "September, autumn \n";
			break;

		case 11:
			cout << "October, autumn \n";
			break;

		case 12:
			cout << "November, autumn \n";
			break;

		default:
			cout << "Not month \n";
			break;
		}
		cout << "press to restart 't'";
		cin >> ok;
	}

	system("pause");
	return 0;
}
