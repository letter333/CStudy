#include <stdio.h>
void printMax(int a, int b) {
	int max = a;
	if (max < b) {
		max = b;
	}
	printf("a�� b�� �� ���� ū �� : %d\n", max);
}

int returnMax(int a, int b) {
	if (a >= b) {
		return a;
	}
	else {
		return b;
	}
}

void swapNum(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int a, b;
	printf("a b �Է� : ");
	scanf_s("%d %d", &a, &b);

	printMax(a, b);

	printf("��ȯ�� : %d\n", returnMax(a, b));
	
	swapNum(&a, &b);
	printf("a : %d, b : %d\n", a, b);

	return 0;
}