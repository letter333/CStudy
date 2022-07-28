#include <stdio.h>
void printArr(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

double average(int ages[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += ages[i];
	}
	return sum / (double)size;
}

int* myAges() {
	static int ages[3];

	for (int i = 0; i < 3; i++) {
		printf("학생의 나이 입력 : ");
		scanf_s("%d", &ages[i]);
	}

	return ages;
}

int main() {
	int ages[3];
	for (int i = 0; i < 3; i++) {
		printf("학생의 나이 입력 : ");
		scanf_s("%d", &ages[i]);
	}
	printf("평균 나이 : %.2f\n", average(ages, 3));

	int* values = myAges();

	for (int i = 0; i < 3; i++) {
		printf("%d ", values[i]);
	}

	printArr(values, 3);

	return 0;
}