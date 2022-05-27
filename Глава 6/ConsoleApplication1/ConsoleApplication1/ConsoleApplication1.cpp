#include <stdio.h>
#include <locale.h>

int main() {
	FILE* inFile, * outFile;
	int min, max, tmp;
	fopen_s(&inFile, "input.txt", "r");
	fopen_s(&outFile, "output.txt", "w");
	fscanf_s(inFile, "%d", &min);
	max = min;
	while (!feof(inFile)) {
		if (!feof(inFile)) {
			printf("XS - 1");
		}
		else {
			printf("XS - 2");
		} 
		if (fscanf_s(inFile, "%d", &tmp) != -1) {
			if (max < tmp) max = tmp;
			if (min > tmp) min = tmp;
		}
	}
	printf("Min = %d, max = %d\n", min, max);
	fprintf(outFile, "Min = %d, max = %d\n", min, max);
	fclose(inFile);
	fclose(outFile);
	return 0;
}