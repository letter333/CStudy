#include <stdio.h>

int main() {
	int age;
	scanf_s("%d", &age);
	printf("�� ���� : %d\n", age);

	printf("���� %d��� �Դϴ�.\n", 2022 + 1 - age);

	int r;
	printf("������ �Է� : ");
	scanf_s("%d", &r);
	printf("���� ���� %f\n", r * r * 3.14);
	printf("���� �ѷ� %f\n", 2 * r * 3.14);

	printf("byte : ");
	int byte;
	scanf_s("%d", &byte);
	printf("%d byte = %d bit\n", byte, byte * 8);

	int bit;
	printf("bit : ");
	scanf_s("%d", &bit);
	printf("%d bit = %d byte\n", bit, bit / 8);

	int mybyte = byte;
	int mybit = mybyte * 8;

	printf("%dbyte * 8 = %dbit\n", mybyte, mybit);

	return 0;
}