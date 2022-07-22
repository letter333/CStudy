#include <stdio.h>

void enterKey() {
	printf("\n");
}

void printPowerNumber(int n) {
	printf("%d", n * n);
}

int inputNum() {
	int n;
	printf("���� �Է� : ");
	scanf_s("%d", &n);
	return n;
}
int PowerNum(int n, int p) {
	if (p <= 0) {
		return 1;
	}
	else if (p == 1) {
		return n;
	}
	else {
		int num = n;
		for (int i = 0; i < p - 1; i++) {
			n *= num;
		}
	}
	return n;
}

void printNumber(int n) {
	printf("%d", n);
}

int main() {
	// 1
	printf("���� 1");
	enterKey();
	int num = inputNum();
	printPowerNumber(num);
	enterKey();
	printPowerNumber(inputNum());
	enterKey();
	printf("���� 2���� ���ؼ� �Է¹ް� ���");
	enterKey();
	printf("2�� 3����");
	enterKey();
	printf("%d", PowerNum(2, 3));
	enterKey();

	// 2
	printf("���� 2");
	enterKey();
	printNumber(10);
	enterKey();

	// 3
	printf("���� 3");
	enterKey();
	int res = PowerNum(2, 5);
	printNumber(res);
	enterKey();

	//  4
	printf("���� 4");
	enterKey();
	int a = inputNum();
	int b = inputNum();
	printNumber(PowerNum(a, b));
	enterKey();

	return 0;
}