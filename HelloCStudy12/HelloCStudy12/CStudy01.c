#include <stdio.h>
void printArr(int numbers[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d\n", numbers[i]);
	}
}

int minMax(int numbers[], int size) {
	int max = numbers[0];
	int min = numbers[0];

	for (int i = 1; i < size; i++) {
		if (max < numbers[i]) {
			max = numbers[i];
		}

		if (min > numbers[i]) {
			min = numbers[i];
		}
	}
	printf("최소값 : %d\n", min);

	return max;
}

void reverse(int numbers[], int size) {
	for (int i = 0; i < size; i++) {
		numbers[i] *= -1;
	}
}

int main() {
	int numbers1[5] = { 5, 4, 10, -2, 1 };
	int numbers2[3];
	numbers2[0] = 100;
	numbers2[1] = 200;
	numbers2[2] = -300;

	for (int i = 0; i < sizeof(numbers1) / sizeof(int); i++) {
		printf("%d\n", numbers1[i]);
	}
	// 1
	printArr(numbers2, sizeof(numbers2)/sizeof(int));

	// 2
	int res = minMax(numbers1, sizeof(numbers1) / sizeof(int));
	printf("반환값 : %d\n", res);
	
	// 3
	reverse(numbers1, sizeof(numbers1) / sizeof(int));
	printArr(numbers1, sizeof(numbers1) / sizeof(int));

	return 0;
}