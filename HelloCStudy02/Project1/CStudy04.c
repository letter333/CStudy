#include <stdio.h>

int main() {
	printf("�� ���ΰ���?(1��)");
	int sec;
	scanf_s("%d", &sec);

	printf("%d�� %d��\n", sec / 60, sec % 60);

	printf("2x+b�� �� ���ϱ�(2��)\n");
	printf("x�� ?");
	int x, b;
	scanf_s("%d", &x);
	printf("b�� ?");
	scanf_s("%d", &b);
	printf("2x+b=%d\n", (2 * x) + b);

	printf("3��\n");
	printf("�����?");
	rewind(stdin);
	char feel = getchar();
	printf("mbti?");
	rewind(stdin);
	char mbti[5];
	scanf_s("%s", mbti, sizeof(mbti));
	printf("������?");
	rewind(stdin);
	char bType[10];
	gets(bType);
	printf("Ű?");
	double cm;
	rewind(stdin);
	scanf_s("%lf", &cm);
	printf("����?");
	int age;
	scanf_s("%d", &age);

	printf("���� ����� %c�Դϴ�. �� mbti�� %s�̰�, �������� %s�Դϴ�.\n�� Ű�� %.2lf�̸�, ���̴� %d���Դϴ�.\n", feel, mbti, bType, cm, age);

	return 0;
}