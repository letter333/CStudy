#include <stdio.h>
int main() {
	int numbers[3][4] = {
		{10, 20, 30, 40},
		{50, 60, 70, 80},
		{90, 100, 110, 120}
	};

	int** ptr = numbers;
	printf("%d\n", numbers[0][0]);
	//printf("%d\n", ptr[0][0]);

	int(*nptr)[4] = numbers;

	printf("%d\n", numbers[1][1]);
	printf("%d\n", nptr[1][1]);

	printf("%d\n", *(* numbers + 1));

	return 0;
}