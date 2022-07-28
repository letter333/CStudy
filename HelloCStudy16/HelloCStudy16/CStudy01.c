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
		printf("���ҽ�ų ���� ���� ! \n");
		return;
	}

	for (int i = 0; i < size; i++) {
		if (numbers[i] - n < 0) {
			printf("����� ���� ! \n");
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

	printf("1��\n");
	int numbers[5] = { 7, 8, 6, 4, 5 };

	for (int i = 0; i < 5; i++) {
		printf("%d ", numbers[i]);
	}

	printf("\n���� ��\n");
	increaseNum(numbers, 5, 3);
	for (int i = 0; i < 5; i++) {
		printf("%d ", numbers[i]);
	}
	printf("\n");
	printf("\n");
	
	
	// 2
	printf("2��\n");
	printf("���� ��\n");
	decreaseNum(numbers, 5, 2);
	for (int i = 0; i < 5; i++) {
		printf("%d ", numbers[i]);
	}
	printf("\n");
	printf("\n");


	// 3
	printf("3��\n");
	printf("���� ��\n");
	decreaseNum2(numbers, 5, 6);
	for (int i = 0; i < 5; i++) {
		printf("%d ", numbers[i]);
	}

	return 0;
}