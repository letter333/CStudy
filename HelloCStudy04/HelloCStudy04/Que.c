#include <stdio.h>
int main() {
	// ���ǹ� ����
	if (0) {
		int m;
		printf("�¾ �� : ");
		scanf_s("%d", &m);

		switch (m)
		{
		case 12:
		case 1:
		case 2:
			printf("�ܿ�\n");
			break;
		case 3:
		case 4:
		case 5:
			printf("��\n");
			break;
		case 6:
		case 7:
		case 8:
			printf("����\n");
			break;
		case 9:
		case 10:
		case 11:
			printf("����\n");
			break;
		default:
			printf("�߸��� �Է�\n");
			break;
		}

		int p1, p2;
		printf("���� �Է�(player1 player2) : ");
		rewind(stdin);
		scanf_s("%d %d", &p1, &p2);
		p1 %= 3;
		p2 %= 3;
		// 0 ���� 1 ���� 2 ��

		switch (p1)
		{
		case 0:
			switch (p2)
			{
			case 0:
				printf("���º�\n");
				break;
			case 1:
				printf("�й�\n");
				break;
			case 2:
				printf("�¸�\n");
				break;
			default:
				printf("�߸��� �Է�\n");
				break;
			}
			break;
		case 1:
			switch (p2)
			{
			case 0:
				printf("�¸�\n");
				break;
			case 1:
				printf("���º�\n");
				break;
			case 2:
				printf("�й�\n");
				break;
			default:
				printf("�߸��� �Է�\n");
				break;
			}
			break;
		case 2:
			switch (p2)
			{
			case 0:
				printf("�й�\n");
				break;
			case 1:
				printf("�¸�\n");
				break;
			case 2:
				printf("���º�\n");
				break;
			default:
				printf("�߸��� �Է�\n");
				break;
			}
			break;
		default:
			printf("�߸��� �Է�\n");
			break;
		}

		int y;
		printf("�¾ ���� : ");
		rewind(stdin);
		scanf_s("%d", &y);

		y %= 12; // 0 = ������

		switch (y)
		{
		case 0:
			printf("������ ��\n");
			break;
		case 1:
			printf("�� ��\n");
			break;
		case 2:
			printf("�� ��\n");
			break;
		case 3:
			printf("���� ��\n");
			break;
		case 4:
			printf("�� ��\n");
			break;
		case 5:
			printf("�� ��\n");
			break;
		case 6:
			printf("ȣ���� ��\n");
			break;
		case 7:
			printf("�䳢 ��\n");
			break;
		case 8:
			printf("�� ��\n");
			break;
		case 9:
			printf("�� ��\n");
			break;
		case 10:
			printf("�� ��\n");
			break;
		case 11:
			printf("�� ��\n");
			break;
		default:
			printf("�߸��� �Է�\n");
			break;
		}
	}

	// �ݺ��� ����
	// 1
	int sum = 0;
	for (int i = 1; i <= 100; i++) {
		sum += i;
	}

	printf("%d\n", sum);

	// 2
	sum = 0;
	for (int i = 1; i <= 100; i++) {
		if (i % 3 == 0) {
			sum += i;
		}
	}
	printf("%d\n", sum);

	// 3
	int n;
	printf("n�� �Է� : ");
	scanf_s("%d", &n);
	int res = 1;
	for (int i = 1; i <= n; i++) {
		res *= i;
	}
	printf("%d\n", res);

	// 4
	printf("�� �Է� : ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	// 5
	printf("�� �Է� : ");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++) {
			printf(" ");
		}
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	// 6
	printf("�� �Է� : ");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++) {
			printf(" ");
		}
		for (int j = 1; j <= i * 2 - 1; j++) {
			printf("*");
		}
		printf("\n");
	}

	// 7
	printf("�� �Է� : ");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++) {
			printf(" ");
		}
		for (int j = 1; j <= i * 2 - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 1; i < n; i++) {
		for (int j = 1; j <= i; j++) {
			printf(" ");
		}
		for (int j = 1; j <= (n - i) * 2 - 1; j++) {
			printf("*");
		}
		printf("\n");
	}




	return 0;
}