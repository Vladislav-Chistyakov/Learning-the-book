#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, c, sum, max, min;
	// Задача 1
	// Вывод всех делителей числа

	printf("Введите число: ");
	scanf_s("%d", &a);
	printf("Делители числа %d: ", a);
	for (int i = 1; i <= a; i++) {
		if (a % i == 0) {
			printf("%d   ", i);
		}
	}
	printf("\n");

	// Задача 2
	// Вывод одинаковых делителей двух введёных чисел

	printf("Введите два целых положительных числа: ");
	scanf_s("%d %d", &a, &b);
	printf("Делители числа %d и %d: ", a, b);
	for (int i = 1; i <= a && i <= b; i++) {
		if (a % i == 0 && b % i == 0) {
			printf("%d  ", i);
		}
	}
	printf("\n");

	// Задача 3
	// вывод простых чисел от заданого числа
	int N, i, j, isPrime;
	printf("Введите число: ");
	scanf_s("%d", &N);
	printf("Простые числа от 1 до %d: ", N);
	for (i = 1; i <= N; i++) {
		isPrime = 1;
		for (j = 2; j < i; j++) {
			if (i % j == 0) isPrime = 0;
		}
		if (isPrime == 1) printf("%d ", i);
	}
	printf("\n");


	return 0;
}