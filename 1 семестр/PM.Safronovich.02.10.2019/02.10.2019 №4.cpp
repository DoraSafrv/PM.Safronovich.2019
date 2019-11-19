#include <iostream> 

using namespace std;

int main()
{
	int a;
	cout << "Enter a \n";
	cin >> a;

	char operation;
	cout << "Enter '+', '-' or '*', '/' \n";
	cin >> operation;

	int b;
	cout << "Enter b \n";
	cin >> b;


	int result;

	if (operation == '+')
	{
		result = a + b;
		cout << "result = " << result << endl;
	}

	if (operation == '-')
	{
		result = a - b;
		cout << "result = " << result << endl;
	}

	if (operation == '*')
	{
		result = a  *b;
		cout << "result = " << result << endl;
	}

	if (operation == '/')
	{
		result = a / b;
		cout << "result = " << result << endl;
	}

	system("pause");
	return 0;
}
