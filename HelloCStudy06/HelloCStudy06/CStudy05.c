#include <stdio.h>
int main() {
	int numbers[6] = {0, };
	char mbti[5] = "ISTP";
	
	int* ptr_n = numbers;
	char* m = mbti;

	*m = 'E';
	*ptr_n = 100;

	printf("%d %d %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3], numbers[4], numbers[5]);
	printf("%s\n", mbti);

	scanf_s("%d", &numbers[1]);
	scanf_s("%d", numbers + 2);
	printf("%d %d %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3], numbers[4], numbers[5]);

	rewind(stdin);
	gets(m);
	printf("%s", mbti);
	printf("%s", m);
	return 0;
}