#include <stdio.h>
void printGanzi(int year) {
	int ganji = year % 10;
	int thee = year % 12;

	switch (ganji)
	{
	case 0:
		printf("경");
		break;
	case 1:
		printf("신");
		break;
	case 2:
		printf("임");
		break;
	case 3:
		printf("계");
		break;
	case 4:
		printf("갑");
		break;
	case 5:
		printf("을");
		break;
	case 6:
		printf("병");
		break;
	case 7:
		printf("정");
		break;
	case 8:
		printf("무");
		break;
	case 9:
		printf("기");
		break;
	default:
		printf("오류!");
		break;
	}

	switch (thee)
	{
	case 0:
		printf("신");
		break;
	case 1:
		printf("유");
		break;
	case 2:
		printf("술");
		break;
	case 3:
		printf("해");
		break;
	case 4:
		printf("자");
		break;
	case 5:
		printf("축");
		break;
	case 6:
		printf("인");
		break;
	case 7:
		printf("묘");
		break;
	case 8:
		printf("진");
		break;
	case 9:
		printf("사");
		break;
	case 10:
		printf("오");
		break;
	case 11:
		printf("미");
		break;
	default:
		printf("오류!");
		break;
	}
}

int main() {
	printf("태어난 년도 : ");
	int year;
	scanf_s("%d", &year);
	printGanzi(year);

	return 0;
}