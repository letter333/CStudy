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
		return printf("sec�� ���� 3600�̻�.\n");
	}
	int m = sec / 60;
	int s = sec % 60;
	printf("%d�� %d��\n", m, s);

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

// solution5�� printf����
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

// solution6�� printf����
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
		printf("%d���� %d������ �� : %d\n", num1, num2, sum);
		break;
	case '*':
		printf("%d���� %d������ �� : %d\n", num1, num2, multiple);
		break;
	case 'x':
	case 'X':
		printf("%d���� %d������ �� : %d\n", num1, num2, multiple);
		break;
	default:
		printf("��ȿ���� ���� ��ȣ\n");
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
	printf("���� 1\n");
	int a, b, c;
	printf("a, b, c �Է� : ");
	scanf_s("%d %d %d", &a, &b, &c);
	int sol1 = solution1(a, b, c);
	printf("1�� : %d\n", sol1);

	// 2
	printf("���� 2\n");
	int sec;
	printf("sec�� �Է� : ");
	scanf_s("%d", &sec);
	int s = solution2(sec);
	printf("m = %d��\n", s);

	// 3
	printf("���� 3\n");
	solution3();

	// 4
	printf("���� 4\n");
	char font;
	char display;
	printf("�� �Է� : ");
	font = getchar();
	rewind(stdin);
	display = getchar();
	solution4(display, font);

	// 5
	printf("���� 5\n");
	printf("�Է� : ");
	int sum = solution5();
	printf("total = %d\n", sum);

	// 6
	printf("���� 6\n");
	printf("a, b�� �Է� : ");
	rewind(stdin);
	scanf_s("%d %d", &a, &b);
	int multiple = solution6(a, b);
	printf("total = %d\n", multiple);

	// 7
	printf("���� 7\n");
	char sign;
	printf("a, b, ��ȣ �Է� : ");
	rewind(stdin);
	scanf_s("%d %d %c", &a, &b, &sign, 1);
	solution7(a, b, sign);

	// 8
	printf("���� 8\n");
	int n;
	printf("n�� �Է� : ");
	scanf_s("%d", &n);
	int result = solution8(n);
	printf("1���� %d������ ��(�ݺ���) : %d\n", n, result);

	// 9
	printf("���� 9\n");
	result = solution9(n);
	printf("1���� %d������ ��(����Լ�) : %d\n", n, result);

	// 10
	printf("���� 10\n");
	printf("n�� �Է� : ");
	scanf_s("%d", &n);
	result = solution10(n);
	printf("%d\n", result);

	return 0;
}