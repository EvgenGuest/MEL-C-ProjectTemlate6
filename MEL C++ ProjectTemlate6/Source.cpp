//������������ ������ ������� �++
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

template <typename T> void showArray(T array[], int length);
template <typename T> void clearArray(T array[], int length, T key);
int indexSum(int array1[], int array2[], int length1, int length2, int ind);
template <typename T> int maxSum(T array[], int length);
void primeRange(int a, int b) {	// ���������� ������� ����� �� ���������
	for (int i = a; i <= b; i++) {
		int count = 1;
		for (int j = 1; j <= i / 2; j++)
			if ( i % j == 0)	
				count++;
		if (count == 2)
			cout << i << " ";
	}
}
template <typename T> int maxSum(T array[], int length) {
	int sum=0;
	for (int i = 0; i < length; i++)
		for (int j = 0; j < length; j++)
			if (array[i] > array[i]+1)
				sum += array[i];
	return sum;
}


int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int n;
	//������ 1.
	int z1[10] = { 20, 5, 12, 56, 35, 28, 2, 75, 9, 10 };
	cout << "������ 1.\n����������� ������:" << endl;
	showArray(z1, 10);
	clearArray(z1, 10, 12);
	cout << endl;
	showArray(z1,10);
	cout << endl;

	//������ 2.
	int arr1[4] = { 2, 3, 5, 3 };
	int arr2[4] = { 6, 1, 9, 0 };
	cout << "\n������ 2.\n������ ������:\n";
	showArray(arr1, 4);
	cout << "\n������ ������:\n";
	showArray(arr2, 4);
	cout << endl;
	cout <<"����� ����� = " << indexSum(arr1, arr2, 4, 4, 20);
	cout << endl;

	//������ 3.
	cout << "\n������ 3.\n����������� ������:";
	int z3[5] = { 1, 2, 3, 4, 5 };
	showArray(z3, 5);
	cout << maxSum(z3, 5);

	// ������ 4.
	cout << "\n������ 4.\n������� ����� �� ���������: ";
	primeRange(5, 100);
	

	return 0;
}
template<typename T> void showArray(T array[], int length) {
	cout << "[";
	for (int i = 0; i < length; i++)
		cout << array[i] << ", ";
	cout << "\b\b]";
}
template <typename T> void clearArray(T array[], int length, T key) {
	for (int i = 0; i < length; i++)
		if (array[i] == key)
			array[i] = 0;
}
int indexSum(int array1[], int array2[], int length1, int length2, int ind) {
	int sum = 0;
	for (int i = 0; i < length1; i++)
		if (i == ind)
			sum += array1[i];
	for (int i = 0; i < length2; i++)
		if (i == ind)
			sum += array2[i];
	if (ind > length1 || ind > length2) {
		cout << "ERROR";
		return 0;
	}
	return sum;
}
