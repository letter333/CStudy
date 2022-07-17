#include <stdio.h>

int main() {
	int age;
	scanf_s("%d", &age);
	printf("내 나이는 %d살 입니다.\n", age);

	int nowYear = 2022;
	printf("내가 태어난 연도 : %d\n", nowYear + 1 - age);

	int r;
	printf("원의 반지름 : ");
	scanf_s("%d", &r);
	printf("원의 넓이 : %f\n", r * r * 3.14);
	printf("원의 둘레 : %f\n", 2 * r * 3.14);

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