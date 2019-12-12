#include <iostream>
#include <locale>
#include <Windows.h>

using namespace std;

char* createRule(const char* source, int shift = 0)
{
	int len = 26;
	char* arr1 = new char[len];
	char* arr2 = new char[len];
	for (int i = 0, j = len - 1; i < len; ++i, j--) 
	{
		arr1[i] = source[j];
	}
	if (shift != 0)
	{
		for (int i = 0; i < len; ++i)
		{
			arr2[i] = arr1[(i + shift) % len];
		}
		return arr2;
	}
	return arr1;
}

int* encoding(const char* source, const char* rule, int num_of_el) 
{
	int* num = new int[num_of_el];
	int find = 0;
	for (int i = 0; i < strlen(source); i++)
	{
		if ((static_cast<int>(source[i]) >= 65 &&
			static_cast<int>(source[i]) <= 90) ||
			(static_cast<int>(source[i]) >= 97 &&
				static_cast<int>(source[i]) <= 122)) 
		{

			for (int j = 0; j < 26; j++)
			{
				if (source[i] == rule[j] || source[i] == tolower(rule[j]))
				{
					find = j;
					break;
				}
			}
			num[i] = find + 1;
		}
		else 
		{
			num[i] = static_cast<int>(source[i]);
		}
	}
	return num;
}

char* decoding(const int* source, int num_of_el, const char* rule)
{
	char* let = new char[num_of_el];
	for (int i = 0; i < num_of_el; i++) 
	{
		if (source[i] >= 0 && source[i] <= 26) 
		{
			int num = source[i];
			let[i] = rule[num - 1];
		}
		else 
		{
			let[i] = static_cast<char>(source[i]);
		}
	}
	return let;
}

bool equals(const char* lhs, int n, const char* rhs, int m)
{
	int count = 0;
	if (n == m)
	{
		for (int i = 0; i < n; i++)
		{
			if (lhs[i] == rhs[i])
			{
				count++;
			}
		}
		if (count == n) 
		{
			return true;
		}
	}
	return false;
}

bool equals(const int* lhs, int n, const int* rhs, int m)
{
	int count = 0;
	if (sizeof(lhs) == sizeof(rhs))
	{
		for (int i = 0; i < sizeof(lhs); i++) 
		{
			if (lhs[i] == rhs[i])
			{
				count++;
			}
		}
		if (count == sizeof(lhs))
		{
			return true;
		}
	}
	return false;
}

void encodingTests()
{
	const char* source = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	const char* rule = createRule(source);
	int* encode = encoding("Learn C++!", rule, 10);
	cout << "Test for encoding " << (equals(encode, 10, new int[10]{ 15, 22, 26, 9, 13, 32, 24, 43, 43, 33 }, 10) ? "Passed." : "Failed.") << "\n";
	delete[] encode;

	encode = encoding("Cogito, ergo sum! (Descartes)", rule, 29);
	cout << "Test for encoding " << (equals(encode, 29, new int[29]{ 24, 12, 20, 18, 7, 12, 44, 32, 22, 9, 20, 12, 32, 8, 6, 14, 33, 32, 40, 23, 22, 8, 24, 26, 9, 7, 22, 8, 41 }, 29) ? "Passed." : "Failed.") << "\n";
	delete[] encode;
	delete[] rule;

	// new shift rule

	rule = createRule(source, 5);
	encode = encoding("Learn C++!", rule, 10);
	cout << "Test for encoding " << (equals(encode, 10, new int[10]{ 10, 17, 21, 4, 8, 32, 19, 43, 43, 33 }, 10) ? "Passed." : "Failed.") << "\n";
	delete[] encode;

	encode = encoding("Cogito, ergo sum! (Descartes)", rule, 29);
	cout << "Test for encoding " << (equals(encode, 29, new int[29]{ 19, 7, 15, 13, 2, 7, 44, 32, 17, 4, 15, 7, 32, 3, 1, 9, 33, 32, 40, 18, 17, 3, 19, 21, 4, 2, 17, 3, 41 }, 29) ? "Passed." : "Failed.") << "\n";
	delete[] encode;
	delete[] rule;
}

void createRuleTest()
{
	const char* source = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	const char* actual = createRule(source);
	const char* expected = "ZYXWVUTSRQPONMLKJIHGFEDCBA";
	cout << "Test for creation rule " << (equals(actual, 26, expected, 26) ? "Passed." : "Failed.") << "\n";
	delete[] actual;

	actual = createRule(source, 5);
	expected = "UTSRQPONMLKJIHGFEDCBAZYXWV";
	cout << "Test for creation rule " << (equals(actual, 26, expected, 26) ? "Passed." : "Failed.") << "\n";
	delete[] actual;
}


void decodingTests()
{
	const char* source = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	const char* rule = createRule(source);
	char* decode = decoding(new int[10]{ 15, 22, 26, 9, 13, 32, 24, 43, 43, 33 }, 10, rule);
	cout << "Test for decoding " << (equals(decode, 10, "LEARN C++!", 10) ? "Passed." : "Failed.") << "\n";
	delete[] decode;

	decode = decoding(new int[29]{ 24, 12, 20, 18, 7, 12, 44, 32, 22, 9, 20, 12, 32, 8, 6, 14, 33, 32, 40, 23, 22, 8, 24, 26, 9, 7, 22, 8, 41 }, 29, rule);
	cout << "Test for decoding " << (equals(decode, 29, "COGITO, ERGO SUM! (DESCARTES)", 29) ? "Passed." : "Failed.") << "\n";
	delete[] decode;
	delete[] rule;

	// new shift rule

	rule = createRule(source, 5);
	decode = decoding(new int[10]{ 10, 17, 21, 4, 8, 32, 19, 43, 43, 33 }, 10, rule);
	cout << "Test for decoding " << (equals(decode, 10, "LEARN C++!", 10) ? "Passed." : "Failed.") << "\n";
	delete[] decode;

	decode = decoding(new int[29]{ 19, 7, 15, 13, 2, 7, 44, 32, 17, 4, 15, 7, 32, 3, 1, 9, 33, 32, 40, 18, 17, 3, 19, 21, 4, 2, 17, 3, 41 }, 29, rule);
	cout << "Test for decoding " << (equals(decode, 29, "COGITO, ERGO SUM! (DESCARTES)", 29) ? "Passed." : "Failed.") << "\n";
	delete[] decode;
	delete[] rule;

}
int main() {
	encodingTests();
	decodingTests();
	createRuleTest();
}





