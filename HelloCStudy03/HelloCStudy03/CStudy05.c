#include <stdio.h>
int main() {
	if (0) {
		int x, y;
		printf("���� �� �� �Է� : ");
		scanf_s("%d %d", &x, &y);

		if (x > 0 && y > 0) {
			printf("1\n");
		}
		else if (x < 0 && y > 0) {
			printf("2\n");
		}
		else if (x < 0 && y < 0) {
			printf("3\n");
		}
		else if (x > 0 && y < 0) {
			printf("4\n");
		}
		else {
			printf("0\n");
		}
	}
	if (0) {
#pragma region �ι�° ����
		printf("���� �Է� : ");
		int age;
		scanf_s("%d", &age);
		if (age < 0 || age > 200) {
			printf("\nŸ�뽺\n");
		}
		else
		{
			if (age < 20) {
				printf("\n�̼�����\n");
			}
			else if (age >= 20 && age <= 50) {
				printf("\n��ȸ�� �� ������\n");
			}
			else if (age <= 70) {
				printf("\n������\n");
			}
			else {
				printf("\n������ ������\n");
			}
		}
#pragma endregion
	}

	int h, m;

	printf("�ð� �Է� : ");
	scanf_s("%d", &h);

	h %= 24;

	printf("�� �Է� : ");
	scanf_s("%d", &m);

	m %= 60;

	printf("45���� �ð� ����\n");

	m = m - 45;
	if (m < 0) {
		m += 60;
		h -= 1;
		if (h < 0) {
			h += 24;
		}
	}
	printf("%d�� %d��\n", h, m);

	return 0;
}