#include <stdio.h>
int solution1(int num1, int num2, int num3) {
	int sum = 0;
	if (num1 > num2) {
		int temp;
		temp = num1;
		num1 = num2;
		num2 = temp;
	}

	for (int i = num1; i <= num2; i++) {
		if (i % num3 == 0) {
			continue;
		}
		sum += i;
	}
	return sum;
}

int solution2(int sec) {
	if (sec >= 3600) {
		return printf("sec의 값이 3600이상.\n");
	}
	int m = sec / 60;
	int s = sec % 60;
	printf("%d분 %d초\n", m, s);

	return s;
}

void solution3() {
	system("color a0");
}

void solution4(char display, char font) {
	char input[100] = "color ";
	input[6] = display;
	input[7] = font;
	system(input);
}

int solution5() {
	int sum = 0;
	for (int i = 1; i <= 100; i++) {
		if (i == 100) {
			printf("%d\n", i);
		}
		else {
			printf("%d + ", i);
		}
		sum += i;
	}
	return sum;
}

// solution5의 printf제거
int solution5_1(int num1, int num2) {
	int sum = 0;
	for (int i = num1; i <= num2; i++) {
		sum += i;
	}
	return sum;
}

int solution6(int num1, int num2) {
	int multiple = 1;

	if (num1 > num2) {
		int temp;
		temp = num1;
		num1 = num2;
		num2 = temp;
	}

	for (int i = num1; i <= num2; i ++ ) {
		if (i == num2) {
			printf("%d\n", i);
		}
		else {
			printf("%d X ", i);
		}
		multiple *= i;
	}
	return multiple;
}

// solution6의 printf제거
int solution6_1(int num1, int num2) {
	int multiple = 1;

	if (num1 > num2) {
		int temp;
		temp = num1;
		num1 = num2;
		num2 = temp;
	}

	for (int i = num1; i <= num2; i++) {
		multiple *= i;
	}
	return multiple;
}

void solution7(int num1, int num2, char sign) {
	int sum = solution5_1(num1, num2);
	int multiple = solution6_1(num1, num2);
	switch (sign)
	{
	case '+':
		printf("%d부터 %d까지의 합 : %d\n", num1, num2, sum);
		break;
	case '*':
		printf("%d부터 %d까지의 곱 : %d\n", num1, num2, multiple);
		break;
	case 'x':
	case 'X':
		printf("%d부터 %d까지의 곱 : %d\n", num1, num2, multiple);
		break;
	default:
		printf("유효하지 않은 부호\n");
		break;
	}
}

int solution8(int num) {
	int multiple = 1;
	for (int i = 1; i <= num; i++) {
		multiple *= i;
	}
	return multiple;
}

int solution9(int num) {
	if (num == 1) {
		return 1;
	}
	return num * solution9(num - 1);
}

int solution10(int num) {
	if (num == 0) {
		return 0;
	}

	if (num == 1) {
		return 1;
	}

	if (num > 1) {
		return solution10(num - 1) + solution10(num - 2);
	}
}

int main() {
	// 1
	printf("문제 1\n");
	int a, b, c;
	printf("a, b, c 입력 : ");
	scanf_s("%d %d %d", &a, &b, &c);
	int sol1 = solution1(a, b, c);
	printf("1번 : %d\n", sol1);

	// 2
	printf("문제 2\n");
	int sec;
	printf("sec값 입력 : ");
	scanf_s("%d", &sec);
	int s = solution2(sec);
	printf("m = %d초\n", s);

	// 3
	printf("문제 3\n");
	solution3();

	// 4
	printf("문제 4\n");
	char font;
	char display;
	printf("색 입력 : ");
	font = getchar();
	rewind(stdin);
	display = getchar();
	solution4(display, font);

	// 5
	printf("문제 5\n");
	printf("입력 : ");
	int sum = solution5();
	printf("total = %d\n", sum);

	// 6
	printf("문제 6\n");
	printf("a, b값 입력 : ");
	rewind(stdin);
	scanf_s("%d %d", &a, &b);
	int multiple = solution6(a, b);
	printf("total = %d\n", multiple);

	// 7
	printf("문제 7\n");
	char sign;
	printf("a, b, 부호 입력 : ");
	rewind(stdin);
	scanf_s("%d %d %c", &a, &b, &sign, 1);
	solution7(a, b, sign);

	// 8
	printf("문제 8\n");
	int n;
	printf("n값 입력 : ");
	scanf_s("%d", &n);
	int result = solution8(n);
	printf("1부터 %d까지의 곱(반복문) : %d\n", n, result);

	// 9
	printf("문제 9\n");
	result = solution9(n);
	printf("1부터 %d까지의 곱(재귀함수) : %d\n", n, result);

	// 10
	printf("문제 10\n");
	printf("n값 입력 : ");
	scanf_s("%d", &n);
	result = solution10(n);
	printf("%d\n", result);

	return 0;
}