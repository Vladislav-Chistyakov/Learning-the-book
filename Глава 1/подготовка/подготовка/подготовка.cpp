#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");

	int a, b, c;
	// Задача №1
	// Вывод всех математических действий
	// Все математические выражения
	printf("\nЗадача №1. Вывод математических действий\n");
	printf("\nВведите два числа ... \n");
	scanf_s("\n%d %d", &a, &b);
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
	printf("%d остаток от деления %d = %d\n", a, b, a % b);

	
	// Задача №2
	printf("\nЗадача №2. Вывод среднего арифметического числа\n");
	printf("\nВведите три числа ... \n");

	scanf_s("%d %d %d", &a, &b, &c);
	printf("\n%d %d %d  среднее арифметическое =  %d\n", a, b, c, (a + b + c) / 3);

	// Задача №3
	printf("\nЗадача №3. Вывод количество часов и минут из заданного числа\n");
	printf("\nВведите число \n");
	scanf_s("%d", &a);
	printf(" Часов %d, минут %d \n", a / 60, a % 60);

	// Задача №4
	printf("\nЗадача №4. Разделение чисел\n");
	printf("\nВведите пятизначное число \n");
	scanf_s("%d\n", &a);
	printf(" %d %d %d %d %d \n", a / 10000, a / 1000 % 10, a % 1000 / 100, a % 100 / 10, a % 10);

	return 0;

}