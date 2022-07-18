#include <stdio.h>
int main() {
	// 6번
	int num;
	printf("숫자를 입력하세요.");
	scanf_s("%d", &num);
	if (num < 0) {
		printf("음수!!!\n");
	}
	else {
		if (num % 2 == 0) {
			printf("짝!\n");
		}
		else if (num == 0) {
			printf("num은 0!!!\n");
		}
		else {
			printf("홀!\n");
		}
	}

	// 7번
	printf("구구단 5단 출력하기\n");
	for (int i = 1; i < 10; i++) {
		printf("5 X %d = %d\n", i, 5 * i);
	}

	// 8번
	printf("몇 단? : ");
	int n;
	scanf_s("%d", &n);
	for (int i = 1; i < 10; i++) {
		printf("%d X %d = %d\n", n, i, n * i);
	}

	// 9번
	for (int i = 2; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			printf("%d X %d = %d\n", i, j, i * j);
		}
	}

	// 10번
	int sum = 0;
	printf("몇 까지 합? : ");
	scanf_s("%d", &n);
	printf("1");
	sum = 1;
	for (int i = 2; i <= n; i++) {
		sum += i;
		printf("+%d", i);
	}
	printf("=%d\n", sum);

	return 0;
}