#include <stdio.h>
int main() {
	// 1
	int sum = 0;
	for (int i = 0; i <= 100; i++) {
		sum += i;
	}
	printf("1부터 100까지의 합 : %d\n", sum);

	// 2
	sum = 0;
	for (int i = 1; i <= 100; i++) {
		if (i % 3 == 0) {
			sum += i;
		}
	}
	printf("1~100까지의 수 중 3의 배수의 합 : %d\n", sum);

	// 3
	printf("몇까지 곱?(1~10사이) ");
	int n;
	scanf_s("%d", &n);
	sum = 1;
	for (int i = 1; i <= n; i++) {
		sum *= i;
	}
	printf("1부터 %d까지의 곱 : %d\n", n, sum);

	// 4
	int floor; // 4~7에 변수 사용
	printf("몇 층? ");
	scanf_s("%d", &floor);
	for (int i = 0; i < floor; i++) {
		for (int j = 0; j < i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}

	// 5
	for (int i = 0; i < floor; i++) {
		for (int j = 0; j < floor - i - 1; j++) {
			printf(" ");
		}
		for (int j = 0; j < i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}

	// 6
	for (int i = 0; i < floor; i++) {
		for (int j = 0; j < floor - i - 1; j++) {
			printf(" ");
		}
		for (int j = 0; j < 2 * i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}

	// 7
	for (int i = 0; i < floor; i++) {
		for (int j = 0; j < floor - i - 1; j++) {
			printf(" ");
		}
		for (int j = 0; j < 2 * i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0; i < floor - 1; i++) {

		for (int j = 0; j < i + 1; j++) {
			printf(" ");
		}
		for (int j = 0; j < (2 * (floor - i - 1)) - 1; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}