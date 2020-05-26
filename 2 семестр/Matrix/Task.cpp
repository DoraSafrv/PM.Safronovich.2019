#include <iostream>
#include "Matrix.h"
#include <fstream>;

using namespace std;

int main()
{
const char* path = "file.txt";
ifstream a(path);
Matrix b(4,4);
a>>b;
cout << b;
}

