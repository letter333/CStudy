#include <stdio.h>
int main() {
	for (int i = 0; i < 10; i++) {
		printf("�ȳ��ϼ���\n");
	}

	int sum = 0;
	for (int i = 1; i <= 10; i++) {
		sum += i;
	}
	printf("1���� 10������ �� : %d\n", sum);

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