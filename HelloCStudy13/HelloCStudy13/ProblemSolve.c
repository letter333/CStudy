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
	printf("noChangeValue사용\n");
	printf("사용 전 a : %d, b : %d\n", a, b);
	noChangeValue(a, b);
	printf("사용 후 a : %d, b : %d\n", a, b);


	// 2
	printf("swap사용\n");
	printf("바뀌기 전 a : %d, b : %d\n", a, b);
	swap(&a, &b);
	printf("바뀐 후 a : %d, b : %d\n", a, b);

	// 3
	printf("a b 입력 : ");
	scanf_s("%d %d", &a, &b);

	printf("바뀌기 전 a : %d, b : %d\n", a, b);
	swap(&a, &b);
	printf("바뀐 후 a : %d, b : %d\n", a, b);

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