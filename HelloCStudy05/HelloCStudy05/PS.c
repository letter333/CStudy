#include <stdio.h>
int main() {
	printf("�ȳ��ϼ��� �� �̸��� ������ �Դϴ�.\n\n");

	int age;
	printf("���� : ");
	scanf_s("%d", &age);
	printf("�� ���̴� %d���Դϴ�.\n\n", age);

	int a, b;
	printf("�Է� 1 : ");
	scanf_s("%d", &a);
	printf("�Է� 2 : ");
	scanf_s("%d", &b);
	printf("%d\n\n", a * a + b * b);

	char name[20];
	printf("�� ���ڸ� �л��� �̸� : ");
	rewind(stdin);
	gets(name);
	printf("�� ���ڸ� �л��� �̸��� %s�Դϴ�.\n\n", name);

	int d;
	printf("�޷� : ");
	scanf_s("%d", &d);
	printf("%.2f\n\n", d * 1299.0);

	int n;
	printf("���� : ");
	scanf_s("%d", &n);

	if (n < 0) {
		printf("����!\n\n");
	}
	else  if (n % 2 == 0) {
		printf("¦!\n\n");
	}
	else if(n % 2 == 1) {
		printf("Ȧ!\n\n");
	}

	for (int i = 1; i <= 9; i++) {
		printf("5 X %d = %d\n", i, 5 * i);
	}
	printf("\n");

	printf("���� : ");
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

	printf("���� : ");
	scanf_s("%d", &n);
	int sum = 0;
	if (n < 0) {
		printf("�߸��� �Է�\n");
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