#include "Matrix.h"
#include <iostream>
#include <fstream>

Matrix::Matrix(int rows, int columns)
{
	this ->rows = rows;
	this ->columns = columns;
	this ->matrix = new int* [rows];
	
	for (int i = 0; i < rows; i++)
	{
		matrix[i] = new int [columns];
	
		for (int j = 0; j < columns; j++)
		{
			matrix[i][j] = rand()%22;
		}
	}
}

int* Matrix::operator[](int i)
{
	return this->matrix[i];
}

Matrix::~Matrix()
{
	for (int i = 0; i < rows; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;
}

ostream& operator<<(ostream& os, Matrix& matrix)
{
	for (int i = 0; i < matrix.rows; i++)
	{
		for (int j = 0; j < matrix.columns; j++)
		{
			os << matrix.matrix[i][j]<<'\t';
		}
		os << endl;
	}
	return os;
}

ofstream& operator<<(ofstream& os, Matrix& matrix)
{
	for (int i = 0; i < matrix.rows; i++)
	{
		for (int j = 0; j < matrix.columns; j++)
		{
			os << matrix.matrix[i][j] << '\t';
		}
		os << endl;
	}
	return os;
}

ifstream& operator>>(ifstream& is, Matrix& matrix)
{
	for (int i = 0; i < matrix.rows; i++)
	{
		for (int j = 0; j < matrix.columns; j++)
		{
			is >> matrix.matrix[i][j];
		}
	}
	return is;
}

int Matrix::getRows()
{
	return rows;
}


int Matrix::getColumns()
{
	return columns;
}