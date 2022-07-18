#include <stdio.h>
int main() {
	// 1
	// 5개의 숫자를 입력받고 그 중에서
	// 가장 큰 숫자와 작은 숫자를 찾으세요.
	int numbers[5];
	
	// 배열의 길이를 구하는 방법
	int size = sizeof(numbers) / sizeof(int);

	for (int i = 0; i < size; i++) {
		printf("%d번째 숫자 : ", i);
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