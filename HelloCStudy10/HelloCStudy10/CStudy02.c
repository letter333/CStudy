#include <stdio.h>
void printMyself() {
	printf("�ȳ��ϼ���\n");
	printf("�̵����Դϴ�.\n");
	printf("�ݰ����ϴ�.\n");
	printf("���� ���α׷��� �����Դϴ�.\n");
}

int MathPower(int num) {
	if (num <= 0) {
		return 0;
	}

	return num * num;
}

char calcul() {
	printf("ù ��° ���� �Է� : ");
	int num1;
	scanf_s("%d", &num1);
	printf("�� ��° ���� �Է� : ");
	int num2;
	scanf_s("%d", &num2);
	int result = num2 - num1;
	if (result < 0) {
		return '-';
	}
	else if (result == 0) {
		return '0';
	}
	else {
		return '+';
	}
}

void calcul_sign(int num1, int num2) {
	int result = num2 - num1;
	if (result < 0) {
		printf("��ȣ�� -�Դϴ�.\n");
	}
	else if (result == 0) {
		printf("��ȣ�� 0�Դϴ�.\n");
	}
	else {
		printf("��ȣ�� +�Դϴ�.\n");
	}
}

int main() {
	printMyself();
	int result = MathPower(5);
	printf("5�� ������ %d�Դϴ�.\n", result);
	printf("3�� ������ %d�Դϴ�.\n", MathPower(3));
	result = MathPower(-7);
	printf("result = %d\n", result);

	char sign = calcul();
	printf("��ȣ�� %c�Դϴ�.\n", sign);

	int n1, n2;
	printf("ù ��° �� : ");
	scanf_s("%d", &n1);
	printf("�� ��° �� : ");
	scanf_s("%d", &n2);
	calcul_sign(n1, n2);

	return 0;
}