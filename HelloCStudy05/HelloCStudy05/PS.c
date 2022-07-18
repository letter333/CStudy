#include <stdio.h>
int main() {
	printf("안녕하세요 제 이름은 오세룡 입니다.\n\n");

	int age;
	printf("나이 : ");
	scanf_s("%d", &age);
	printf("내 나이는 %d살입니다.\n\n", age);

	int a, b;
	printf("입력 1 : ");
	scanf_s("%d", &a);
	printf("입력 2 : ");
	scanf_s("%d", &b);
	printf("%d\n\n", a * a + b * b);

	char name[20];
	printf("내 옆자리 학생의 이름 : ");
	rewind(stdin);
	gets(name);
	printf("내 옆자리 학생의 이름은 %s입니다.\n\n", name);

	int d;
	printf("달러 : ");
	scanf_s("%d", &d);
	printf("%.2f\n\n", d * 1299.0);

	int n;
	printf("숫자 : ");
	scanf_s("%d", &n);

	if (n < 0) {
		printf("음수!\n\n");
	}
	else  if (n % 2 == 0) {
		printf("짝!\n\n");
	}
	else if(n % 2 == 1) {
		printf("홀!\n\n");
	}

	for (int i = 1; i <= 9; i++) {
		printf("5 X %d = %d\n", i, 5 * i);
	}
	printf("\n");

	printf("숫자 : ");
	scanf_s("%d", &n);
	for (int i = 1; i <= 9; i++) {
		printf("%d X %d = %d\n", n, i, n * i);
	}
	printf("\n");

	for (int i = 1; i <= 9; i++) {
		for (int j = 2; j <= 9; j++) {
			printf("%d X %d = %d\t", j, i, i * j);
		}
		printf("\n");
	}

	printf("\n");

	printf("숫자 : ");
	scanf_s("%d", &n);
	int sum = 0;
	if (n < 0) {
		printf("잘못된 입력\n");
	}
	else {
		for (int i = 1; i <= n; i++) {
			sum += i;
			if (i != n) {
				printf("%d+", i);
			}
			else {
				printf("%d=%d\n", i, sum);
			}
		}
	}

	return 0;
}