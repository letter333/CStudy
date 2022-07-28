#include <stdio.h>
int calcAge() {
	int year;
	printf("몇년도 ? ");
	scanf_s("%d", &year);
	return 2023 - year;
}

int main() {
	int age = calcAge();
	printf("내 나이는 %d살 입니다.\n", age);

	return 0;
}