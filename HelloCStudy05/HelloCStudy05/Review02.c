#include <stdio.h>
int main() {
	// 6��
	int num;
	printf("���ڸ� �Է��ϼ���.");
	scanf_s("%d", &num);
	if (num < 0) {
		printf("����!!!\n");
	}
	else {
		if (num % 2 == 0) {
			printf("¦!\n");
		}
		else if (num == 0) {
			printf("num�� 0!!!\n");
		}
		else {
			printf("Ȧ!\n");
		}
	}

	// 7��
	printf("������ 5�� ����ϱ�\n");
	for (int i = 1; i < 10; i++) {
		printf("5 X %d = %d\n", i, 5 * i);
	}

	// 8��
	printf("�� ��? : ");
	int n;
	scanf_s("%d", &n);
	for (int i = 1; i < 10; i++) {
		printf("%d X %d = %d\n", n, i, n * i);
	}

	// 9��
	for (int i = 2; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			printf("%d X %d = %d\n", i, j, i * j);
		}
	}

	// 10��
	int sum = 0;
	printf("�� ���� ��? : ");
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