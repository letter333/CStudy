#include <stdio.h>
void noSwap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int a = 3;
	int b = 5;

	noSwap(a, b);
	printf("a = %d, b = %d\n", a, b);
	swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);
	int* pa = &a;
	int* pb = &b;
	swap(pa, pb);
	printf("a = %d, b = %d\n", a, b);

	return 0;
}