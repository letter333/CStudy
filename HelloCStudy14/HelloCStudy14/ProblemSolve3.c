#include <stdio.h>
int gugusum() {
	int sum = 0;
	for (int i = 1; i < 10; i++) {
		for (int j = 2; j < 10; j++) {
			sum += (j * i);
		}
	}

	return sum;
}

void gugu1(int dan) {
	for (int i = 1; i < 10; i++) {
		printf("%d X %d = %d\n", dan, i, dan * i);
	}
}

void gugu2(int x1, int x2) {
	for (int i = x1; i <= x2; i++) {
		for (int j = 2; j < 10; j++) {
			printf("%d X %d = %2d   ", j, i, j * i);
		}
		printf("\n");
	}
}

int gugu3(int dan1, int dan2) {
	int sum = 0;
	for (int i = 1; i < 10; i++) {
		for (int j = dan1; j <= dan2; j++) {
			sum += (j * i);
			printf("%d X %d = %2d   ", j, i, j * i);
		}
		printf("\n");
	}

	return sum;
}

int main() {
	printf("구구단 값의 합 : %d\n", gugusum());

	int dan;
	printf("단 입력 : ");
	scanf_s("%d", &dan);
	gugu1(dan);

	int x1, x2;
	printf("곱하기 몇부터 몇까지? ");
	scanf_s("%d %d", &x1, &x2);
	gugu2(x1, x2);

	int dan1, dan2;
	printf("몇 단부터 몇 단까지의 합? ");
	scanf_s("%d %d", &dan1, &dan2);
	printf("합 : %d\n", gugu3(dan1, dan2));

	return 0;
}