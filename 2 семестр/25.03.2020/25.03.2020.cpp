#include <iostream>
#include<fstream>

using namespace std;

void createFile(char*, int);

int main()
{

	//char ch = 78;
	//cout << ch << endl;

	const int n = 30;
	char path[n] = "Text.txt";
	int k;
	cout<< "Enter count of the numbers:"<<endl;
	cin >> k;
	system("cls");
	createFile(path,k);
	system("pause");


return 0;
}


void createFile(char* path, int n)
{
	//ofstream sout(path);

	//vs
	ofstream sout;
	sout.open(path, ios::out);

	if (!sout.is_open())
	{
		cout << "Cannot open file to write!"<< endl;
		system("pause");
		exit(1);
		//throw exception!
	}

	cout << "Enter the elements of array"<< endl;
	system("cls");
	int temp;
	for (int i = 0; i < n; i++)
	{
		/*cout << "enter temp variable";
		cin>> temp;*/
		temp = i;
		sout.width(5);
		sout << temp << endl;
		cout.width(5);
		cout << temp << endl;
	}

sout.close();

}