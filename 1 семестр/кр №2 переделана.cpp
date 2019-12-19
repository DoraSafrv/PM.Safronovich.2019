#include <iostream>
#include <cmath>

using namespace std;

int parseStringToSumWithUnsigned(const char*, int);
int parseStringToSumWithSigned(const char*, int);
void parseStringToSumWithUnsignedTest();
void parseStringToSumWithSignedTest();
int degree(int, int);


int parseStringToSumWithUnsigned(const char* source, int numOfEl)
 {
	int* num = new int[numOfEl];

	for (int i = 0; i < numOfEl; i++)
	{
		if (static_cast<int>(source[i]) >= '0' && static_cast<int>(source[i]) <= '9')
		{
			num[i] = static_cast<int>(source[i]) - '0';
		}
		else
		{
			num[i] = 10;
		}
	}

	int sum = 0;
	int temp = 0;
	int count = 0;

	for (int i = numOfEl; i >= 0; i--)
	{
		if (num[i] >= 0 && num[i] <= 9)
		{
			temp = temp + num[i] * degree(10, count);
			count++;

			if (i == 0)
			{
				sum = sum + temp;
			}
		}
		else
		{
			sum = sum + temp;
			count = 0;
			temp = 0;
		}
	}
	return sum;
}

int parseStringToSumWithSigned(const char* source, int numOfEl) 
{
	int* num = new int[numOfEl];

	for (int i = 0; i < numOfEl; i++) 
	{
		if (static_cast<int>(source[i]) >= '0' && static_cast<int>(source[i]) <= '9') 
		{
			num[i] = static_cast<int>(source[i]) - '0';
		}
		else if (static_cast<int>(source[i]) == '-') 
		{
			num[i] = 11;
		}
		else
		{
			num[i] = 10;
		}
	}

	int sum = 0;
	int temp = 0;
	int count = 0;

	for (int i = numOfEl; i >= 0; i--)
	{
		if (num[i] >= 0 && num[i] <= 9) 
		{
			temp = temp + num[i] * degree(10, count);
			count++;

			if (i == 0)
			{
				sum = sum + temp;
			}
		}
		else if (num[i] == 11) 
		{
			sum = sum - temp;
			count = 0;
			temp = 0;
		}
		else 
		{
			sum = sum + temp;
			count = 0;
			temp = 0;
		}
	}
	return sum;
}

void parseStringToSumWithUnsignedTest() 
{
	bool result = parseStringToSumWithUnsigned("1235+-8+*** 90", 14) == 1333;
	cout << "Test for unsigned parsing " << (result ? "Passed." : "Failed.") << endl;

	result = parseStringToSumWithUnsigned("1235+-8+* 4** -22--- 9", 22) == 1278;
	cout << "Test for unsigned parsing " << (result ? "Passed." : "Failed.") << endl;
}

void parseStringToSumWithSignedTest()
{
	bool result = parseStringToSumWithSigned("1235+-8+*** 90", 14) == 1317;
	cout << "Test for signed parsing " << (result ? "Passed." : "Failed.") << endl;

	result = parseStringToSumWithSigned("1235+-8+* 4** -22--- 9", 22) == 1218;
	cout << "Test for signed parsing " << (result ? "Passed." : "Failed.") << endl;

}

int main() 
{
	parseStringToSumWithUnsignedTest();
	parseStringToSumWithSignedTest();
}

int degree(int num, int degree) 
{
	int deg = 1;
	if (degree == 0)
	{
		return 1;
	}
	else 
	{
		for (int i = 0; i < degree; i++) 
		{
			deg = deg * num;
		}
	}
	return deg;
}