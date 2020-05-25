#pragma once
#include <iostream>

using namespace std;

class Matrix
{
public:
Matrix(int rows, int columns);
friend ostream& operator << (ostream&, Matrix&);
friend ofstream& operator << (ofstream&, Matrix&);
friend ifstream& operator >> (ifstream&, Matrix&);
int* operator[](int);
int getRows();
int getColumns();
~Matrix();

private:
int** matrix;
int columns;
int rows;
};