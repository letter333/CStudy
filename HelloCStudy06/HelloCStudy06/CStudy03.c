#include <stdio.h>
int main() {
	int a = 10;
	int* ptr_a = &a;
	(*ptr_a)++;
	printf("a=%d\n", a);

	a++;
	printf("ptr_a�� ����Ű�� ���� �� : %d\n", *ptr_a);
	printf("a=%d\n", a);

	int b = a;
	b++;
	printf("a=%d\n", a);
	
	return 0;
}