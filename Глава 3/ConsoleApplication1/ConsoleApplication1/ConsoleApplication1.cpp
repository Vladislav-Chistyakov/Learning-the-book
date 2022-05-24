#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, c, d, sumLeft, sumRight;
	scanf_s("%d", &a);

	b = ((a - a % 100000) / 100000) + ((a % 100000) / 10000) + ((a % 10000) / 1000);
	c = ((a % 1000) / 100) + ((a % 100) / 10) + ((a % 10) / 1);

	if (b == c) {
		printf("Вы победитель");
	}
	else {
		printf("Вы проиграли");
	}






	return 0;
}