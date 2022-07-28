#include <stdio.h>
void changeValue(int* p, int v)
{
	*p = v;
}


void noChangeValue(int p, int v)
{
	p = v;
}

int main() {
	int ex = 10;
	int* exptr = &ex;

	changeValue(exptr, 100);
	printf("ex = %d\n", ex);
	changeValue(&ex, 500);
	printf("ex = %d\n", ex);

	return 0;
}