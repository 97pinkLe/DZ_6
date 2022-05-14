#include <iostream>
#include <windows.h>
#include "Header.h"

using namespace std;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	int a;
	cout << "Введите размер массива: \n";
	cin >> a;
	int* mas = new int[a];
	double* mass = new double[a];
	for (int i = 0; i < a; i++) {
		mas[i] = rand();
	}
	for (int i = 0; i < a; i++) {
		mass[i] = rand() / 10.1;
	}
	BubbleSort(mas, a);
	BubbleSort(mass, a);
	delete[] mas;
	delete[] mass;
}