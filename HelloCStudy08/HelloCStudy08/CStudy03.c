#include <stdio.h>
int main() {
	int input;
	scanf_s("%d", &input);
	int max = 1; // ���� ��ȣ
	int count = 0; // �׷� ��ȣ
	while (1) {
		max = max + (6 * count);
		if (max < input) {
			count++;
			continue;
		}
		else {
			printf("%d��/�� %d��° �׷�\n", input, count + 1);
			break;
		}
	}

	return 0;
}