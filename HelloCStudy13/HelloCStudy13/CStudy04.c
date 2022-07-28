#include <stdio.h>
void no_changeValue(int a, int b) {
	a = b;
}

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int a = 3;
	no_changeValue(a, 300);
	printf("a = %d\n", a);

	int b = 5;
	swap(&a, &b);
	printf("%d %d\n", a, b);

	return 0;
}