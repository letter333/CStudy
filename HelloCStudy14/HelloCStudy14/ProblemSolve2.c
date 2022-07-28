#include <stdio.h>
void gugu() {
	for (int i = 1; i < 10; i++) {
		for (int j = 2; j < 10; j++) {
			printf("%d X %d = %2d   ", j, i, j * i);
		}
		printf("\n");
	}
}

void gugu2() {
	int dan1, dan2, multi1, multi2;
	printf("몇 단 부터 몇 단 까지? ");
	scanf_s("%d %d", &dan1, &dan2);
	printf("곱하기 몇 부터 몇 까지? ");
	scanf_s("%d %d", &multi1, &multi2);

	for (int i = multi1; i <= multi2; i++) {
		for (int j = dan1; j <= dan2; j++) {
			printf("%d X %d = %2d   ", j, i, j * i);
		}
		printf("\n");
	}

}

int main() {
	for (int i = 1; i < 10; i++) {
		for (int j = 2; j < 10; j++) {
			printf("%d X %d = %2d   ", j, i, j * i);
		}
		printf("\n");
	}

	printf("\n");
	printf("\n");

	gugu();

	printf("\n");
	printf("\n");

	gugu2();
	return 0;
}