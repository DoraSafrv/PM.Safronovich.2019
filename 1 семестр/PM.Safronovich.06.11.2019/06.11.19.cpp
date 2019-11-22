#include <iostream>

void change(int* ptr, int num) {     // 1 task
	int count = 0;
	int temp;
	while (count < num) {
		temp = *(ptr + count);
		*(ptr + count) = *(ptr + num - 1);
		*(ptr + num - 1) = temp;
		count++;
		num--;
	}
}



bool isPrime(int n)                                  // 2 task
{
	if (n > 1){
		for (int i = 2; i < n; i++)
			if (n % i == 0) {
				return false;
			}
		return true;
	} else {
		return false;
	}
}

int* prime(int* ptr, int num, int* el) {
	int* arr2 = new int[num];
	int count = 0;
	for (int i = 0; i < 0; i++) {
		if (isPrime(*(ptr + i))) {
			arr2[count] = *(ptr + i);
		}
	}
	*(el) = count + 1;
}



int num_of_el(int* ptr, int num, int new_num) {    //3 task
	int count = 0;
	for (int i = 0; i < num; i++) {
		if (*(ptr + i) < new_num) {
			count++;
		}
		else {
			return count;
		}
	}
	return count;
}



void typeOfSequence(int* ptr, int num) {   //4 task
	int increase = 0;
	int decreasing = 0;
	int not_increase = 0;
	int not_decreasing = 0;
	for (int i = 1; i < num; i++) {
		if (*(ptr + i - 1) > * (ptr + i)) {
			decreasing++;
		}
		if (*(ptr + i - 1) < * (ptr + i)) {
			increasing++;
		}
		if (*(ptr + i - 1) >= * (ptr + i)) {
			not_increasing++;
		}
		if (*(ptr + i - 1) < *(ptr + i )) {
			not_decreasing++;
		}
	}
	if (not_decreasing == num) {
		cout << "function does not increase ";
	} 
	else if (not_increasing == num) {
		cout << "function does not increases ";
	} 
	else if (increasing == num) {
		cout << "function increases ";
	} 
	else if(decreasing == num) {
		cout << "function decreases ";
	}
	else {
		cout << "not categorized";
	}
}



void output(int* ptr, int num) {
	for (int i = 0; i < num; i++) {
		cout << *(ptr + i) << "\t";
	}
}



int main() {
	int num;
	cout << "Enter integer value: ";
	cin >> num;

	int* arr = new int[num];
	for (int i = 0; i < num; i++) {
		cin >> arr[i];
	}

	typeOfSequence(arr, num);

	output(arr, num);
}
