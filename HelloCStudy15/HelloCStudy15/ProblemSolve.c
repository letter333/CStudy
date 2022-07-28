#include <stdio.h>
#include <string.h>
char* myDdi(int year) {
	switch (year % 12)
	{
	case 0:
		return "원숭이";
	case 1:
		return "닭";
	case 2:
		return "개";
	case 3:
		return "돼지";
	case 4:
		return "쥐";
	case 5:
		return "소";
	case 6:
		return "호랑이";
	case 7:
		return "토끼";
	case 8:
		return "용";
	case 9:
		return "뱀";
	case 10:
		return "말";
	case 11:
		return "양";
	default:
		return "오류";
	}
}

char* ganzi(int year) {
	char zi[12][10] = { "신", "유", "술", "해", "자", "축", "인", "묘", "진", "사", "오", "미" };
		char gan[10][10] = { "경", "신", "임", "계", "갑", "을", "병", "정", "무", "기" };

	static char res[10] = "";
	strcat_s(res, 10, gan[year % 10]);
	strcat_s(res, 10, zi[year % 12]);
	// 2-1
	printf("%s년\n", res);

	return res;
}

char* season(int month) {
	switch (month)
	{
	case 12:
	case 1:
	case 2:
		return "겨울";
	case 3:
	case 4:
	case 5:
		return "봄";
	case 6:
	case 7:
	case 8:
		return "여름";
	case 9:
	case 10:
	case 11:
		return "가을";
	case -1:
		return "지구 아님";
	default:
		return "오류";
	}
}

int length(char str[]) {
	int len = 0;

	for (int i = 0; str[i] != NULL; i++) {
		len++;
	}

	return len;
}

int main() {
	// 1
	int year;
	printf("태어난 연도 입력 : ");
	scanf_s("%d", &year);
	printf("%s\n", myDdi(year));

	// 2
	printf("%s년\n", ganzi(year));
	
	// 3
	int month;
	printf("태어난 월 입력 : ");
	scanf_s("%d", &month);
	printf("%s\n", season(month));

	// 4
	char str[1024] = { NULL };
	printf("문자열 입력 : ");
	rewind(stdin);
	gets(str);
	printf("문자열 길이 : %d\n", length(str));

	return 0;
}