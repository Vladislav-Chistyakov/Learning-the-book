#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	const double pi = 3.14;
	double V, r, h;
	printf("Введите значения r и h через пробле: ");
	scanf_s("%lg %lg", &r, &h);
	V = pi * r * r * h;
	printf("Объем бассена равен %lg\n", V);
	return 0;
}