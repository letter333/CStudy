#include <stdio.h>
int main() {
	if (0) {
		// 1 팩토리얼 출력
		printf("몇 팩토리얼? : ");
		int fact;
		scanf_s("%d", &fact);
		printf("%d!=%d", fact, fact);
		for (int i = fact - 1; i > 0; i--) {
			printf("X%d", i);
		}
		printf("\n\n");
		// 2 n부터 m까지의 합
		int n, m;
		printf("n과 m을 입력 : ");
		scanf_s("%d %d", &n, &m);
		if (n > m) {
			int temp = m;
			m = n;
			n = temp;
		}
		int sum = 0;
		for (int i = n; i <= m; i++) {
			sum += i;
		}
		printf("%d부터 %d까지의 합은 %d이다.\n", n, m, sum);
		printf("\n\n");

		// 3 n부터 m까지의 짝수 합
		printf("n? m? 입력 : ");
		scanf_s("%d %d", &n, &m);
		if (n > m) {
			printf("첫번째가 두번째보다 커서 합을 못구함.\n");
		}
		else {
			sum = 0;
			for (int i = n; i <= m; i++) {
				if (i % 2 != 0) {
					continue;
				}
				sum += i;
			}
			printf("%d부터 %d까지의 합은 %d이다.\n", n, m, sum);
		}

		// 4 
		while (1) {
			int input;
			printf("입력 : ");
			scanf_s("%d", &input);
			if (input <= 0) {
				break;
			}
			printf("제곱값 : %d\n", input * input);
		}
		int input = 0;
		do {
			printf("숫자 : ");
			scanf_s("%d", &input);
			printf("%d\n", input * input);
		} while (input > 0);
	}
	// 5
	int N;
	printf("입력 : ");
	scanf_s("%d", &N);
	for (int i = 0; i < 2 * N; i++) {
		int onOffSwitch = i;
		for (int j = 0; j < N; j++) {
			if (onOffSwitch % 2 == 0) {
				printf("*");
			}
			else {
				printf(" ");
			}
			onOffSwitch++;
		}
		printf("\n");
	}

	return 0;
}