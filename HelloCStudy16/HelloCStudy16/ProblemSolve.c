#include <stdio.h>
#include <stdlib.h>
double ageAvg(int* arr, int size) {
	double avg = 0;
	double sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}

	avg = sum / size;

	return avg;
}

int* arr() {
	static int numbers[5] = { 1, 2, 3, 4, 5 };

	return numbers;
}

void printArr(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main() {
	// 1
	int size;
	printf("학생 몇 명? ");
	scanf_s("%d", &size);

	int* ages = (int*)malloc(sizeof(int) * size);

	for (int i = 0; i < size; i++) {
		scanf_s("%d", &ages[i]);
	}

	// 2 ~ 3
	printf("%.2lf", ageAvg(ages, size));

	printf("\n");

	int* numbers = arr();

	printArr(numbers, 5);


	return 0;
}