#include <stdio.h>
int main() {
	int stuNum[5][4];

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d���� %d�� ���ǽ� �л��� �� �Է� : ", i + 1, j + 1);
			scanf_s("%d", &stuNum[i][j]);
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d���� %d�� ���ǽ� �л��� �� ��� : %d\n", i + 1, j + 1, stuNum[i][j]);
		}
	}



	return 0;
}