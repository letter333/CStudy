#include <stdio.h>
int main() {
	for (int i = 0; i < 10; i++) {
		printf("이동준 선생님\n");
	}

	int count = 0;
	while (count < 10)
	{
		printf("count = %d\n", count);
		count++;
	}

	do
	{
		printf("count = %d\n", count);
	} while (count < 10);

	return 0;
}