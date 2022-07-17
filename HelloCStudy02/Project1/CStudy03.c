#include <stdio.h>
int main() {
	char c;
	printf("내 기분은 오늘 +? -? 0?\n");
	scanf_s("%c", &c, 1);
	printf("오늘 내 기분은 %c 입니다.\n", c);
	rewind(stdin);
	printf("c ? ");
	scanf_s("%c", &c, 1);
	printf("c = %c\n", c);
	rewind(stdin);

	printf("내 이름의 첫 글자는 ? ");
	c = getchar();
	printf("%c\n", c);
	printf("내 이름의 끝 글자는 ? ");
	rewind(stdin);
	c = getchar();
	printf("%c\n", c);

	char name[100];
	printf("이름 : ");
	scanf_s("%s", name, sizeof(name));
	printf("내 이름은 %s입니다.\n", name);
	rewind(stdin);

	char mbti[100];
	printf("MBTI ? ");
	gets(mbti);
	printf("내 MBTI는 %s입니다.\n", mbti);

	return 0;
}