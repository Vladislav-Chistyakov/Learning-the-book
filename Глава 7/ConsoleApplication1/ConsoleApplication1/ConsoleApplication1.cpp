
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>


const int N = 10;
void printMas(int mas[N][N]) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
			printf("%4d", mas[i][j]);
		printf("\n");
	}
	printf("\n");
}
void generateRandomMas(int mas[N][N]) {
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			mas[i][j] = rand() % 101;
}
 int main() {
	const int N = 10;
	int mas1[N][N], mas2[N][N], result[N][N];
	srand(time(0));
	generateRandomMas(mas1);
	generateRandomMas(mas2);
	printMas(mas1);
	printMas(mas2);
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			result[i][j] = mas1[i][j] + mas2[i][j];
	printMas(result);
	return 0;
}








