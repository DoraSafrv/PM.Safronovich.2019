#include <iostream>

using namespace std;
#include "WorkWithString.h"
#include "WorkWithStrings.h"

int getLength(const char*);
bool isDigit(const char);
void reverseNumber(int&);
//etc
int parseStringToSumWithUnsigned(const char*);
int parseStringToSumWithSigned(const char*);
void parseStringToSumWithUnsignedTest();
void parseStringToSumWithSignedTest();


int main()
{
	parseStringToSumWithUnsignedTest();
	parseStringToSumWithSignedTest();
	system("pause");
	return 0;
}

int parseStringToSumWithUnsigned(const char* source)
{
	int numOfEl;
	int* num = new int[numOfEl]; 
	int count = 0;  
	for (int i = 0; i < numOfEl; i++) 
	{   
		if (static_cast<int>(source[i]) >= 48 && static_cast<int>(source[i]) <= 57)
		{
			num[i] = static_cast<int>(source[i]) - 48;
			count++;
		}
	}

	int sum = 0;

	for (int i = 0; i < count; i++) 
	{
		sum = sum + num[i];
	}

	return sum;
}

bool isDigit(const char symbol)
{




	return true;
}

void reverseNumber(int& number)
{
	return;
}

int getLength(const char* source)
{
	int length = 0;

	while (source[length])
	{
		length++;
	}

	return length;
}

int parseStringToSumWithSigned(const char*)
{
	return 0;
}

void parseStringToSumWithUnsignedTest()
{
	bool result = parseStringToSumWithUnsigned("1235+-8+*** 90") == 1333;
	cout << "Test for unsigned parsing " << (result ? "Passed." : "Failed.") << endl;

	result = parseStringToSumWithUnsigned("1235+-8+* 4** -22--- 9") == 1278;
	cout << "Test for unsigned parsing " << (result ? "Passed." : "Failed.") << endl;

	//etc
}

void parseStringToSumWithSignedTest()
{
	bool result = parseStringToSumWithSigned("1235+-8+*** 90") == 1317;
	cout << "Test for signed parsing " << (result ? "Passed." : "Failed.") << endl;

	result = parseStringToSumWithSigned("1235+-8+* 4** -22--- 9") == 1218;
	cout << "Test for signed parsing " << (result ? "Passed." : "Failed.") << endl;

	//etc
}