#include <stdio.h>

int main() {
	int age;
	scanf_s("%d", &age);
	printf("내 나이 : %d\n", age);

	printf("나는 %d년생 입니다.\n", 2022 + 1 - age);

	int r;
	printf("반지름 입력 : ");
	scanf_s("%d", &r);
	printf("원의 넓이 %f\n", r * r * 3.14);
	printf("원의 둘레 %f\n", 2 * r * 3.14);

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