#include "Header.h"

using std::swap;

void BubbleSort(int* arr, unsigned size) {
	for (int i = 0; i < size - i; i++) {
		for (int j = 0; j < size - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int b = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = b;
			}
		}
	}
	print(arr, size);
}

void print(int* arr, unsigned size) {
	cout << "Отсортированный массив целых чисел: ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void print(double* arr, unsigned size) {
	cout << "Отсортированный массив дробных чисел: ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void BubbleSort(double* arr, unsigned size) {
	for (int i = 0; i < size - i; i++) {
		for (int j = 0; j < size - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				double b = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = b;
			}
		}
	}
	print(arr, size);
}