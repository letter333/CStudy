#include <stdio.h>
int main() {
	// 1
	// 5���� ���ڸ� �Է¹ް� �� �߿���
	// ���� ū ���ڿ� ���� ���ڸ� ã������.
	int numbers[5];
	
	// �迭�� ���̸� ���ϴ� ���
	int size = sizeof(numbers) / sizeof(int);

	for (int i = 0; i < size; i++) {
		printf("%d��° ���� : ", i);
		int num;
		scanf_s("%d", &num);
		numbers[i] = num;
		// scanf_s("%d", &numbers[i]);
	}

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

	printf("max = %d\n", max);
	printf("min = %d\n", min);

	return 0;
}