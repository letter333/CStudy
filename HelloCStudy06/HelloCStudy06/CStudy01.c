#include <stdio.h>
int main() {
	int a = 10;
	printf("%d, %lld\n", a, &a);

	int* ptr_a = &a;
	int * ptr_a2 = &a;
	int *ptr_a3 = &a;
	
	double b = 3.14;
	double* ptr_b = &b;

	char c = 'A';
	char* ptr_c = &c;
	char* name = "¿À¼¼·æ";

	printf("%c %s %s\n", c, ptr_c, name);

	char myName [100] = "¿À¼¼·æ";
	printf("%s", myName);

	int aa = 100;
	int* ptr_aa = &aa;

	scanf_s("%d", ptr_aa);
	printf("aa=%d\n", aa);

	*ptr_aa = 0;
	printf("%d\n", *ptr_aa);

	return 0;
}