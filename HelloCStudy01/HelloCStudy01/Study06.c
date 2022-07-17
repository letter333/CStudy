/*
#include <stdio.h>

int main() {
	int a = 10;
	a = 100;
	double b = 3.14;
	char c = 'A';
	
	return 0;
}
*/
#include <stdio.h>
int main() {
	int a, b;
	scanf_s("%d %d", &a, &b);

	printf("%d", a * (b - (b / 100) - ((b - b / 100) / 10)));

	return 0;
}