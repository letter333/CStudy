#include <stdio.h>
int main() {
	int num;
	printf("num�� �Է� : ");
	scanf_s("%d", &num);

	num % 2 == 0 ? printf("¦\n") : printf("Ȧ\n");

	num != 0 && num % 2 == 0 ? printf("num�� ¦\n") : printf("num = 0 �Ǵ� Ȧ\n");


	char score;
	score = num > 0 || num == -1 ? 'A' : 'B';

	printf("score = %c\n", score);

	printf("%d\n", 100 == 100);
	printf("%d\n", 100 != 100);
	printf("%d\n", 100 >= 100);
	printf("%d\n", 100 < 100);

	return 0;
}