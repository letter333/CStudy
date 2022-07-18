#include <stdio.h>
void printMyself() {
	printf("안녕하세요\n");
	printf("이동준입니다.\n");
	printf("반갑습니다.\n");
	printf("저는 프로그래밍 교사입니다.\n");
}

int MathPower(int num) {
	if (num <= 0) {
		return 0;
	}

	return num * num;
}

char calcul() {
	printf("첫 번째 숫자 입력 : ");
	int num1;
	scanf_s("%d", &num1);
	printf("두 번째 숫자 입력 : ");
	int num2;
	scanf_s("%d", &num2);
	int result = num2 - num1;
	if (result < 0) {
		return '-';
	}
	else if (result == 0) {
		return '0';
	}
	else {
		return '+';
	}
}

void calcul_sign(int num1, int num2) {
	int result = num2 - num1;
	if (result < 0) {
		printf("기호는 -입니다.\n");
	}
	else if (result == 0) {
		printf("기호는 0입니다.\n");
	}
	else {
		printf("기호는 +입니다.\n");
	}
}

int main() {
	printMyself();
	int result = MathPower(5);
	printf("5의 제곱은 %d입니다.\n", result);
	printf("3의 제곱은 %d입니다.\n", MathPower(3));
	result = MathPower(-7);
	printf("result = %d\n", result);

	char sign = calcul();
	printf("기호는 %c입니다.\n", sign);

	int n1, n2;
	printf("첫 번째 수 : ");
	scanf_s("%d", &n1);
	printf("두 번째 수 : ");
	scanf_s("%d", &n2);
	calcul_sign(n1, n2);

	return 0;
}