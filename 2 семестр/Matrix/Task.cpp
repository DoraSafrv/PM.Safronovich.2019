#include <iostream>
#include "Matrix.h"
#include <fstream>;

using namespace std;

void matrixUrod(Matrix&);
int findElement(Matrix&, int, int);

int main()
{
const char* path = "file.txt";
ifstream a(path);
Matrix b(4,4);
a>>b;
cout << b;

}

void matrixUrod(Matrix& matrix)
{
	for (int i = 0; i < matrix.getRows(); i++)
	{
		for (int j = 0; j < matrix.getColumns; j++)
		{
			matrix[i][j] = // сортировка матрицы оч непанятна
		}
	}
}


