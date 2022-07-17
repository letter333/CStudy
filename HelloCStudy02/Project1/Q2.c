#include <stdio.h>

int main() {
	int s;
	printf("초 입력 : ");
	scanf_s("%d", &s);
	printf("%d분 %d초\n", s / 60, s % 60);

	int x, b;
	printf("x : ");
	scanf_s("%d", &x);
	printf("b : ");
	scanf_s("%d", &b);
	printf("2x + b의 값은 : %d입니다.\n", 2 * x + b);

	char f;
	int age;
	double h;
	char mbti[5];
	char bType[10];

	rewind(stdin);
	printf("기분 : ");
	scanf_s("%c", &f, 1);
	rewind(stdin);
	printf("나이 : ");
	scanf_s("%d", &age);
	rewind(stdin);
	printf("키 : ");
	scanf_s("%lf", &h);
	rewind(stdin);
	printf("mbti : ");
	gets(mbti);
	rewind(stdin);
	printf("혈액형 : ");
	gets(bType);
	rewind(stdin);

	printf("저의 기분은 %c입니다. 제 mbti는 %s이고, 혈액형은 %s입니다.\n제 키는 %.2lf이며, 나이는 %d살입니다.\n", f, mbti, bType, h, age);

	int a;
	printf("a : ");
	scanf_s("%d", &a);
	printf("(x + a)(x + b) = %d\n", x * x +(a + b) * x + (a + b));
	rewind(stdin);

	printf("a, b : ");
	scanf_s("%d\n%d", &a, &b);
	rewind(stdin);
	printf("첫번째 숫자 곱하기 두번째 숫자의 1의 자리 수 : %d\n", a * (b - ((b / 100) * 100) - (((b - ((b / 100) * 100)) / 10) * 10)));
	printf("첫번째 숫자 곱하기 두번째 숫자의 10의 자리 수 : %d\n", a * ((b - ((b / 100) * 100)) / 10));
	printf("첫번째 숫자 곱하기 두번째 숫자의 100의 자리 수 : %d\n", a * (b / 100));
	printf("첫번째 숫자 곱하기 두번째 숫자 : %d\n", a * b);

	return 0;
}