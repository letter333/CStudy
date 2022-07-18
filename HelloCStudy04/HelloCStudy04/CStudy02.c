#include <stdio.h>
int main() {
	int a = 5;

	a++; // a = a + 1;  a += 1;
	++a;
	a--;
	--a;

	printf("%d\n", ++a);
	printf("%d\n", a++);
	printf("%d\n", a);

	return 0;
}