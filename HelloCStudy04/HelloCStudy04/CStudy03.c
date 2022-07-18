#include <stdio.h>
int main() {
	for (int i = 0; i < 10; i++) {
		printf("안녕하세요\n");
	}

	int sum = 0;
	for (int i = 1; i <= 10; i++) {
		sum += i;
	}
	printf("1부터 10까지의 합 : %d\n", sum);

	for (int i = 0; i < 5; i++) {
		if (i % 2 == 0) {
			printf("%");
		}
		else {
			printf("!");
		}
	}

	return 0;
}