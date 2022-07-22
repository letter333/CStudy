#include <stdio.h>

void enterKey() {
	printf("\n");
}

void printPowerNumber(int n) {
	printf("%d", n * n);
}

int inputNum() {
	int n;
	printf("숫자 입력 : ");
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
	printf("문제 1");
	enterKey();
	int num = inputNum();
	printPowerNumber(num);
	enterKey();
	printPowerNumber(inputNum());
	enterKey();
	printf("숫자 2개에 대해서 입력받고 출력");
	enterKey();
	printf("2의 3제곱");
	enterKey();
	printf("%d", PowerNum(2, 3));
	enterKey();

	// 2
	printf("문제 2");
	enterKey();
	printNumber(10);
	enterKey();

	// 3
	printf("문제 3");
	enterKey();
	int res = PowerNum(2, 5);
	printNumber(res);
	enterKey();

	//  4
	printf("문제 4");
	enterKey();
	int a = inputNum();
	int b = inputNum();
	printNumber(PowerNum(a, b));
	enterKey();

	return 0;
}