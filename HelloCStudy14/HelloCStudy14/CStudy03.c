#include <stdio.h>
void swap(int* a, int* b, int* c) {
	int temp = *a;
	*a = *b;
	*b = *c;
	*c = temp;
}
int main() {
	int a, b, c;
	printf("a, b, c ют╥б : ");
	scanf_s("%d %d %d", &a, &b, &c);
	int aa = a;
	int bb = b;
	int cc = c;
	while (1) {
		swap(&a, &b, &c);
		printf("a = %d b = %d c = %d\n", a, b, c);
		if (a == aa && b == bb && c == cc) {
			break;
		}

	}

	return 0;
}