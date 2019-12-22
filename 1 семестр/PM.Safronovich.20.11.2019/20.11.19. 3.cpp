#include <iostream>
#include <cmath>

using namespace std;

char* createArr();
char* createArr1();
int result(char*, char*);

int main()
{
	cout << result(createArr(), createArr1());
}

char* createArr()
{
	int num;
	cin >> num;
	char* arr = new char[num];
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}
	return arr;
}

char* createArr1()
{
	int num1;
	cin >> num1;
	char* arr1 = new char[num1];
	for (int i = 0; i < num1; i++)
	{
		cin >> arr1[i];
	}
	return arr1;
}

int result(char* arr, char* arr1)
{
	int count = 0;
	int position = 0;

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		for (int j = 0; j < sizeof(arr1) / sizeof(arr1[0]); j++)
		{
			if (arr[i] == arr1[j])
			{
				count++;
				break;
			}
			
		}
		position++;
	}
	position = position - count + 1;

	return position;
}