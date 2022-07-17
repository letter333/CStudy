#include <stdio.h>
int main() {
	int num;
	printf("num°ª ÀÔ·Â : ");
	scanf_s("%d", &num);

	num % 2 == 0 ? printf("Â¦\n") : printf("È¦\n");

	num != 0 && num % 2 == 0 ? printf("numÀº Â¦\n") : printf("num = 0 ¶Ç´Â È¦\n");


	char score;
	score = num > 0 || num == -1 ? 'A' : 'B';

	printf("score = %c\n", score);

	printf("%d\n", 100 == 100);
	printf("%d\n", 100 != 100);
	printf("%d\n", 100 >= 100);
	printf("%d\n", 100 < 100);

	return 0;
}