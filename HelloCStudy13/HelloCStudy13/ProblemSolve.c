#include <stdio.h>
void noChangeValue(int p, int v)
{
	p = v;
}

void swap(int* a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int inputNum() {
	int num;
	scanf_s("%d", &num);

	return num;
}

void printNum(int num) {
	printf("%d\n", num);
}

int main() {
	int a = 3;
	int b = 5;
	
	// 1
	printf("noChangeValue���\n");
	printf("��� �� a : %d, b : %d\n", a, b);
	noChangeValue(a, b);
	printf("��� �� a : %d, b : %d\n", a, b);


	// 2
	printf("swap���\n");
	printf("�ٲ�� �� a : %d, b : %d\n", a, b);
	swap(&a, &b);
	printf("�ٲ� �� a : %d, b : %d\n", a, b);

	// 3
	printf("a b �Է� : ");
	scanf_s("%d %d", &a, &b);

	printf("�ٲ�� �� a : %d, b : %d\n", a, b);
	swap(&a, &b);
	printf("�ٲ� �� a : %d, b : %d\n", a, b);

	// 4
	a = inputNum();
	b = inputNum();
	printNum(a);
	printNum(b);
	swap(&a, &b);
	printNum(a);
	printNum(b);

	return 0;
}