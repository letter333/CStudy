#include <stdio.h>
int main() {
	if (0) {
		// 1 ���丮�� ���
		printf("�� ���丮��? : ");
		int fact;
		scanf_s("%d", &fact);
		printf("%d!=%d", fact, fact);
		for (int i = fact - 1; i > 0; i--) {
			printf("X%d", i);
		}
		printf("\n\n");
		// 2 n���� m������ ��
		int n, m;
		printf("n�� m�� �Է� : ");
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
		printf("%d���� %d������ ���� %d�̴�.\n", n, m, sum);
		printf("\n\n");

		// 3 n���� m������ ¦�� ��
		printf("n? m? �Է� : ");
		scanf_s("%d %d", &n, &m);
		if (n > m) {
			printf("ù��°�� �ι�°���� Ŀ�� ���� ������.\n");
		}
		else {
			sum = 0;
			for (int i = n; i <= m; i++) {
				if (i % 2 != 0) {
					continue;
				}
				sum += i;
			}
			printf("%d���� %d������ ���� %d�̴�.\n", n, m, sum);
		}

		// 4 
		while (1) {
			int input;
			printf("�Է� : ");
			scanf_s("%d", &input);
			if (input <= 0) {
				break;
			}
			printf("������ : %d\n", input * input);
		}
		int input = 0;
		do {
			printf("���� : ");
			scanf_s("%d", &input);
			printf("%d\n", input * input);
		} while (input > 0);
	}
	// 5
	int N;
	printf("�Է� : ");
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