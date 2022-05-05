#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	printf("Введите три числа: ");
	scanf_s("%d %d %d", &a, &b, &c);
	if ((a % 2) + (b % 2) == 1) {
		printf("Какое-то число чётное");
	}
	return 0;
}