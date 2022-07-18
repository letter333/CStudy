#include <stdio.h>
int main() {
	for (int i = 0; i < 1000; i++) {
		if (i > 5) {
			break;
		}
		printf("test\n");
	}

	for (int i = 1; i <= 10; i++) {
		if (i % 2 != 0) {
			continue;
		}
		printf("%d\n", i);
	}

	int count = 0;

	while (count < 10) {
		count++;
		printf("count=%d\n", count);
	}

	while (1)
	{
		if (count > 100) {
			break;
		}
		count += 10;
		printf("count=%d\n", count);
	}

	do
	{
		printf("1번은 무조건 실행");
	} while (count < 100);

	return 0;
}