#include <stdio.h>
int gugudan_sum() {
	int sum = 0;
	for (int i = 2; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			sum += (i * j);
		}
	}

	return sum;
}

void q2_dan_print(int dan) {
	for (int i = 1; i <= 9; i++) {
		printf("%d X %d = %d\n", dan, i, dan * i);
	}
}

void q3_gugu_gob(int s, int e) {
	for (int i = 2; i <= 9; i++) {
		for (int j = s; j <= e; j++) {
			printf("%d X %d = %d\n", i, j, i * j);
		}
	}
}

int q4_gugu_sum(int s, int e) {
	int sum = 0;
	for (int i = s; i <= e; i++) {
		for (int j = 1; j <= 9; j++) {
			printf("%d X %d = %d\n", i, j, i * j);
			sum += (i * j);
		}
	}

	return sum;
}

int main() {
	printf("q1 : %d\n", gugudan_sum());

	int dan;
	scanf_s("%d", &dan);
	printf("q2\n");
	q2_dan_print(dan);

	printf("q3\n");
	int start, end;
	scanf_s("%d %d", &start, &end);
	q3_gugu_gob(start, end);

	int start_dan, end_dan;
	scanf_s("%d %d", &start_dan, &end_dan);
	printf("q4\n");
	printf("4¹ø °á°ú : %d\n", q4_gugu_sum(start_dan, end_dan));

	return 0;
}