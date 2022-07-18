#include <stdio.h>
int main() {
	int a = 10;
	int* ptr_a = &a;
	*ptr_a = 11;

	printf("%d\n", *ptr_a);
	printf("%d\n", a);

	int numbers[10];
	
	for (int i = 1; i <= 10; i++) {
		numbers[i - 1] = i;
	}

	for (int i = 0; i < 10; i++) {
		printf("%d\n", numbers[i]);
	}

	int* ptr = numbers;
	for (int i = 0; i < 10; i++) {
		ptr[i] = i * 10;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d\n", numbers[i]);
	}

	return 0;
}