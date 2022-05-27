#include <stdio.h>
#include <locale.h>
// Объявляем функцию
int factorial(int n);

int main() {
	setlocale(LC_ALL, "Russian");
	int a;
	scanf_s("%d", &a);

	factorial(a);
	return 0;
}

int factorial(int n) {
	int a, b, c;
	n = 100;

	for (int i = 1; i < n; i++) {
		for (int j = 2; j <= i; j++) {
			int p = 0;
			if (i % j == 0 && i != j) {
				p = 1;
				break;
			}
			if (i == j) {
				if (p != 1) {
					printf("Простое число %d\n", i);
				}
			}
		}
	}

	return n;
}



