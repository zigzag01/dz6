//Белоушко Елизавета П43021
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");

	/*1. Задан массив А, содержащий 100 целых чисел. Найти сумму элементов этого массива.

	const int n = 100;
	int A[n];
	int sum = 0;
	srand(time(0));
	for (int i = 0; i < n; i++) {
		A[i] = rand() % 101 - 50;
	}
	for (int i = 0; i < n; i++) {
		sum += A[i];
	}
	cout << sum << endl;*/



	/*2. Задан массив, который содержит 80 целых чисел. Найти сумму положительных элементов массива.

	const int n = 80;
	int A[n];
	int sum = 0;
	srand(time(0));
	for (int i = 0; i < n; i++) {
		A[i] = rand() % 101 - 50;
	}
	for (int i = 0; i < n; i++) {
		if (A[i] % 2 == 0) { sum += A[i]; }
	}
	cout << sum << endl;*/



	/*3. Задан массив, который содержит 60 целых чисел. Найти количество элементов массива, которые делятся на 3.

	const int n = 60;
	int A[n];
	int kol = 0;
	srand(time(0));
	for (int i = 0; i < n; i++) {
		A[i] = rand() % 101 - 50;
	}
	for (int i = 0; i < n; i++) {
		if (A[i] % 3 == 0) { kol++; }
	}
	cout << kol << endl;*/



	/*4. Задан массив, из 90 целых чисел. Найти произведение элементов массива, которые являются нечетными числами.

	const int n = 90;
	int A[n];
	int pr = 1;
	srand(time(0));
	for (int i = 0; i < n; i++) {
		A[i] = rand() % 101 - 50;
	}
	for (int i = 0; i < n; i++) {
		if (A[i] % 2 != 0) { pr *= A[i]; }
	}
	cout << pr << endl;*/

	return 0;
}