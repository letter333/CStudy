#include <stdio.h>
int main() {
	int month;
	printf("q1 태어난 월을 입력. ");
	scanf_s("%d", &month);
	switch (month)
	{
	case 12:
	case 1:
	case 2:
		printf("겨울\n");
		break;
	case 3:
	case 4:
	case 5:
		printf("봄\n");
		break;
	case 6:
	case 7:
	case 8:
		printf("여름\n");
		break;
	case 9:
	case 10:
	case 11:
		printf("가을\n");
		break;
	default:
		printf("오류\n");
		break;
	}

	return 0;
}