#include"PointLibrary.h"
#include <iostream>


using namespace std;

void EnterPoint(Point&);
void DisplayPoint(const Point&);
void EnterPoint(Point*);
void DisplayPoint(const Point*);
Point* InitArray(int);
void DisplayPoints(Point*, int);
void SortVectors(Point*, int);
void SortVectors(Point*, int, double*);
void Swap(Point* poits1, Point* points2);
double* InitArrayLength(Point*, int);
void Swap(double* a, double* b);

int main()
{
	Point* array = InitArray(9);

	for (int i = 0; i < 9; i++)
	{
		array[i].display();
	}
	cout << endl;



	double* array1 = InitArrayLength(array, 9);

	SortVectors(array, 9, array1);

	for (int i = 0; i < 9; i++)
	{
		array[i].display();
	}
	return 0;
}

void SortVectors(Point* points, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			if (points[j].length() < points[j - 1].length())
			{
				swap(points[j], points[j - 1]);
			}
		}
	}
}

void Swap(Point* points1, Point* points2)
{
	Point a = *points1;
	*points1 = *points2;
	*points2 = a;

}

void EnterPoint(Point& point)
{
	std::cout << "Enter x - coordinate:";
	std::cin >> point.x;
	std::cout << "Enter y - coordinate:";
	std::cin >> point.y;
}

void DisplayPoint(const Point& point)
{
	std::cout << "( " << point.x << " ; " << point.y << " )" << " ";
}

void EnterPoint(Point* p)
{
	std::cout << "Enter x - coordinate:";
	std::cin >> (*p).x;
	std::cout << "Enter y - coordinate:";
	std::cin >> p->y;
}

void DisplayPoint(const Point* p)
{
	std::cout << "( " << p->x << " ; " << p->y << " )" << std::endl;
}

Point* InitArray(int n)
{
	if (n <= 0)
	{
		throw std::out_of_range("Count of elements can not be less or equal than zero!");
	}

	Point* points = new Point[n];

	for (int i = 0; i < n; i++)
	{
		points[i] = Point(rand() % 10, rand() % 22);
	}

	return points;
}

void DisplayPoints(Point* points, int n)
{
	for (int i = 0; i < n; i++)
	{
		//DisplayPoint(points[i]);
		points[i].display();
	}
}

double* InitArrayLength(Point* points, int n)
{
	double* arrayLenth = new double[n];

	for (int i = 0; i < n; i++)
	{
		arrayLenth[i] = points[i].length();
	}

	return arrayLenth;
}

void SortVectors(Point* points, int n, double* arrayLenth)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			if (arrayLenth[j] < arrayLenth[j - 1])
			{
				swap(points[j], points[j - 1]);
				swap(arrayLenth[j], arrayLenth[j - 1]);
			}
		}
	}
}

void Swap(double* a, double* b)
{
	double t = *a;
	*a = *b;
	*b = t;

}
