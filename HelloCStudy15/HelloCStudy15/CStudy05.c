#include <stdio.h>
int calculAge(int y) {
	return 2023 - y;
}

int main() {
	int year;
	printf("몇년생 ? ");
	scanf_s("%d", &year);
	printf("내 나이는 %d살 입니다.\n", calculAge(year));
}