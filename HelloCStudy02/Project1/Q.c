#include <stdio.h>

int main() {
	int age;
	scanf_s("%d", &age);
	printf("�� ���̴� %d�� �Դϴ�.\n", age);

	int nowYear = 2022;
	printf("���� �¾ ���� : %d\n", nowYear + 1 - age);

	int r;
	printf("���� ������ : ");
	scanf_s("%d", &r);
	printf("���� ���� : %f\n", r * r * 3.14);
	printf("���� �ѷ� : %f\n", 2 * r * 3.14);

	int byte;
	printf("byte : ");
	scanf_s("%d", &byte);

	int myBit = byte * 8;
	printf("bit : %d\n", myBit);

	int bit;
	printf("bit : ");
	scanf_s("%d", &bit);

	int myByte = bit / 8;
	printf("byte : %d\n", myByte);



	printf("%d * 8 = %d\n", myByte, myBit);

	return 0;
}