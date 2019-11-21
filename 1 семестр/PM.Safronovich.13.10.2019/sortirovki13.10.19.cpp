#include <iostream>
using namespace std;
void SimplePut(int* A, int n) // сортировка включением
{
	int i, j, Tmp;

	for (i = 1; i < n; i++){
		Tmp = A[i];
		j = i - 1;

		while (A[j] >= Tmp && j >= 0){
			A[j + 1] = A[j]; j--;
		}
		A[j + 1] = Tmp;
	}
}

void SelectionSort(int A[], int n) //сортировка выбором
{
	int count, key;
	for (int i = 0; i < n - 1; i++)
	{
		count = A[i]; key = i;
		for (int j = i + 1; j < n; j++)
			if (A[j] < A[key]) key = j;
		if (key != i)
		{
			A[i] = A[key];
			A[key] = count;
		}
	}
}

void BubbleSort(int* A, int size)     //сортировка обменом
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = (size - 1); j > i; j--) 
		{
			if (A[j - 1] > A[j]) 
			{
				int temp = A[j - 1];
				A[j - 1] = A[j];
				A[j] = temp;
			}
		}
	}
}


void quickSort(int* a, long N) {     //быстрая сортировка 

	long i = 0, j = N - 1; 	
	int temp, p;

	p = a[N >> 1];

	do {
		while (a[i] < p) i++;
		while (a[j] > p) j--;

		if (i <= j) {
			temp = a[i]; a[i] = a[j]; a[j] = temp;
			i++; j--;
		}
	} while (i <= j);

	if (j > 0) quickSort(a, j);
	if (N > i) quickSort(a + i, N - i);
}


int main() {
	int num; 
	cout << "Enter integer value: ";
	cin >> num; 

	int* p_darr = new int[num]; 
	for (int i = 0; i < num; i++) {
		cin >> p_darr[i];
	}

	//BubbleSort(p_darr, num);
	//SimplePut(p_darr, num);
	//BubbleSort(p_darr, num);
	quickSort(p_darr, num);

	for (int i = 0; i < num; i++) {
		cout << p_darr[i] << "\t";
	}
}