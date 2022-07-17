#include <stdio.h>
int main() {
	int x, b;
	printf("x와 b는 ? ");
	scanf_s("%d %d", &x, &b);

	int a;
	printf("a는 ? ");
	scanf_s("%d", &a);

	printf("(%d + %d)(%d + %d) = %d\n", x, a, x, b, (x + a) * (x + b));//x * x + ((a + b) * x) + (a * b)
	printf("x^2 + (a + b)x + (a * b) = %d\n", x * x + ((a + b) * x) + (a * b));

	int num1, num2;
	printf("첫 번째와 두 번째 숫자를 입력하세요. ");
	scanf_s("%d %d", &num1, &num2);
	printf("%d\n", num1 * (num2 % 10));
	printf("%d\n", num1 * ((num2 / 10) % 10));
	printf("%d\n", num1 * (num2 / 100));
	printf("%d\n", num1 * num2);

	printf("두 번째 숫자만 다시 입력. ");
	char number[5];
	rewind(stdin);
	gets(number);

	printf("%d, %d, %d, %d\n", num1 * (number[2] - '0'), num1 * (number[1] - '0'), num1 * (number[0]-'0'), num1 * atoi(number));
	// atoi -> 문자열을 숫자로
 
	return 0;
}