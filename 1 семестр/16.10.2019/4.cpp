#include <iostream>
#include <math.h>

using namespace std;

int size(int a)
{
	int size_ = 0;

	while (a > 0)
	{
		size_++;
		a /= 10;
	}

	return size_;
}

void doRa(int n, int was, int became)
{
	while (n > 0)
	{
		int buffer = n / (int)pow(10, size(n) - 1);
		n %= (int)pow(10, size(n) - 1);

		if (buffer == was)
		{
			cout << became;
		}
		else
		{
			cout << buffer;
		}
	}
}

int main()
{
	int n, was, became;
	cin >> n >> was >> became;

	doRa(n, was, became);

	system("pause");
	return 0;
}
