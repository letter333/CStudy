#include <stdio.h>
int main() {
	char c;
	printf("�� ����� ���� +? -? 0?\n");
	scanf_s("%c", &c, 1);
	printf("���� �� ����� %c �Դϴ�.\n", c);
	rewind(stdin);
	printf("c ? ");
	scanf_s("%c", &c, 1);
	printf("c = %c\n", c);
	rewind(stdin);

	printf("�� �̸��� ù ���ڴ� ? ");
	c = getchar();
	printf("%c\n", c);
	printf("�� �̸��� �� ���ڴ� ? ");
	rewind(stdin);
	c = getchar();
	printf("%c\n", c);

	char name[100];
	printf("�̸� : ");
	scanf_s("%s", name, sizeof(name));
	printf("�� �̸��� %s�Դϴ�.\n", name);
	rewind(stdin);

	char mbti[100];
	printf("MBTI ? ");
	gets(mbti);
	printf("�� MBTI�� %s�Դϴ�.\n", mbti);

	return 0;
}