#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int a, c, *b;
	b = &a;
	scanf_s("%d %d", b, &c);

	if (a > c) {
		for (int i = 1; a != c; i++) {
			a = a - c;
			if (a == c) {
				printf("наибольший делитель - %d", *b);
				break;
			}
		}
	}
	else {
		for (int i = 1; c != a; i++) {
			c = c - a;
			if (c == a) {
				printf("наибольший делитель - %d", c);
				break;
			}
		}
	}

	return 0;
}