#include <stdio.h>

int main() {
	printf("몇 초인가요?(1번)");
	int sec;
	scanf_s("%d", &sec);

	printf("%d분 %d초\n", sec / 60, sec % 60);

	printf("2x+b의 해 구하기(2번)\n");
	printf("x는 ?");
	int x, b;
	scanf_s("%d", &x);
	printf("b는 ?");
	scanf_s("%d", &b);
	printf("2x+b=%d\n", (2 * x) + b);

	printf("3번\n");
	printf("기분은?");
	rewind(stdin);
	char feel = getchar();
	printf("mbti?");
	rewind(stdin);
	char mbti[5];
	scanf_s("%s", mbti, sizeof(mbti));
	printf("혈액형?");
	rewind(stdin);
	char bType[10];
	gets(bType);
	printf("키?");
	double cm;
	rewind(stdin);
	scanf_s("%lf", &cm);
	printf("나이?");
	int age;
	scanf_s("%d", &age);

	printf("저의 기분은 %c입니다. 제 mbti는 %s이고, 혈액형은 %s입니다.\n제 키는 %.2lf이며, 나이는 %d살입니다.\n", feel, mbti, bType, cm, age);

	return 0;
}