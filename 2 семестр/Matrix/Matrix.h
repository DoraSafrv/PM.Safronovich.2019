#pragma once
#include <iostream>

using namespace std;

class Matrix
{
public:
Matrix(int rows, int columns);
friend ostream& operator << (ostream&, Matrix);
~Matrix();

private:
int** matrix;
int columns;
int rows;
};