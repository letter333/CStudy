#include <stdio.h>

int main() {
	int s;
	printf("�� �Է� : ");
	scanf_s("%d", &s);
	printf("%d�� %d��\n", s / 60, s % 60);

	int x, b;
	printf("x : ");
	scanf_s("%d", &x);
	printf("b : ");
	scanf_s("%d", &b);
	printf("2x + b�� ���� : %d�Դϴ�.\n", 2 * x + b);

	char f;
	int age;
	double h;
	char mbti[5];
	char bType[10];

	rewind(stdin);
	printf("��� : ");
	scanf_s("%c", &f, 1);
	rewind(stdin);
	printf("���� : ");
	scanf_s("%d", &age);
	rewind(stdin);
	printf("Ű : ");
	scanf_s("%lf", &h);
	rewind(stdin);
	printf("mbti : ");
	gets(mbti);
	rewind(stdin);
	printf("������ : ");
	gets(bType);
	rewind(stdin);

	printf("���� ����� %c�Դϴ�. �� mbti�� %s�̰�, �������� %s�Դϴ�.\n�� Ű�� %.2lf�̸�, ���̴� %d���Դϴ�.\n", f, mbti, bType, h, age);

	int a;
	printf("a : ");
	scanf_s("%d", &a);
	printf("(x + a)(x + b) = %d\n", x * x +(a + b) * x + (a + b));
	rewind(stdin);

	printf("a, b : ");
	scanf_s("%d\n%d", &a, &b);
	rewind(stdin);
	printf("ù��° ���� ���ϱ� �ι�° ������ 1�� �ڸ� �� : %d\n", a * (b - ((b / 100) * 100) - (((b - ((b / 100) * 100)) / 10) * 10)));
	printf("ù��° ���� ���ϱ� �ι�° ������ 10�� �ڸ� �� : %d\n", a * ((b - ((b / 100) * 100)) / 10));
	printf("ù��° ���� ���ϱ� �ι�° ������ 100�� �ڸ� �� : %d\n", a * (b / 100));
	printf("ù��° ���� ���ϱ� �ι�° ���� : %d\n", a * b);

	return 0;
}