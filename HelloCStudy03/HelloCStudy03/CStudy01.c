#include <stdio.h>
int main() {
	int x, b;
	printf("x�� b�� ? ");
	scanf_s("%d %d", &x, &b);

	int a;
	printf("a�� ? ");
	scanf_s("%d", &a);

	printf("(%d + %d)(%d + %d) = %d\n", x, a, x, b, (x + a) * (x + b));//x * x + ((a + b) * x) + (a * b)
	printf("x^2 + (a + b)x + (a * b) = %d\n", x * x + ((a + b) * x) + (a * b));

	int num1, num2;
	printf("ù ��°�� �� ��° ���ڸ� �Է��ϼ���. ");
	scanf_s("%d %d", &num1, &num2);
	printf("%d\n", num1 * (num2 % 10));
	printf("%d\n", num1 * ((num2 / 10) % 10));
	printf("%d\n", num1 * (num2 / 100));
	printf("%d\n", num1 * num2);

	printf("�� ��° ���ڸ� �ٽ� �Է�. ");
	char number[5];
	rewind(stdin);
	gets(number);

	printf("%d, %d, %d, %d\n", num1 * (number[2] - '0'), num1 * (number[1] - '0'), num1 * (number[0]-'0'), num1 * atoi(number));
	// atoi -> ���ڿ��� ���ڷ�
 
	return 0;
}