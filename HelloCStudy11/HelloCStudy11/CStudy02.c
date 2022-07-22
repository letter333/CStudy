#include <stdio.h>
extern int a;
extern int b;
int main() {
	a++;
	printf("%d\n", a);
	up_Print();

	return 0;
}