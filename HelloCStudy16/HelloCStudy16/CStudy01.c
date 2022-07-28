#include <stdio.h>

void increaseNum(int* numbers, int size, int n) {
	for (int i = 0; i < size; i++) {
		numbers[i] += n;
	}
}

// 2
void decreaseNum(int* numbers, int size, int n) {
	for (int i = 0; i < size; i++) {
		numbers[i] -= n;
	}
}

void decreaseNum2(int* numbers, int size, int n) {
	if (n < 0) {
		printf("감소시킬 값이 음수 ! \n");
		return;
	}

	for (int i = 0; i < size; i++) {
		if (numbers[i] - n < 0) {
			printf("결과가 음수 ! \n");
			return;
		}
		else {
			numbers[i] -= n;
		}
	}
}

int main() {
	if (0) {
		int ages[5] = { 23, 25, 30, 29, 50 };
		int ages2[3] = { 10, 20, 30 };

		int ages3[3];
		ages3[0] = 20;
		ages3[1] = 30;
		ages3[2] = 40;

		for (int i = 0; i < 5; i++) {
			printf("%d\n", ages[i]);
			ages[i] = i * i + ages[i];
		}
	}

	// 1

	printf("1번\n");
	int numbers[5] = { 7, 8, 6, 4, 5 };

	for (int i = 0; i < 5; i++) {
		printf("%d ", numbers[i]);
	}

	printf("\n변경 후\n");
	increaseNum(numbers, 5, 3);
	for (int i = 0; i < 5; i++) {
		printf("%d ", numbers[i]);
	}
	printf("\n");
	printf("\n");
	
	
	// 2
	printf("2번\n");
	printf("변경 후\n");
	decreaseNum(numbers, 5, 2);
	for (int i = 0; i < 5; i++) {
		printf("%d ", numbers[i]);
	}
	printf("\n");
	printf("\n");


	// 3
	printf("3번\n");
	printf("변경 후\n");
	decreaseNum2(numbers, 5, 6);
	for (int i = 0; i < 5; i++) {
		printf("%d ", numbers[i]);
	}

	return 0;
}