#include <stdio.h>
void season() {
	int num;
	printf("몇 월 ? ");
	scanf_s("%d", &num);
	switch (num)
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
		printf("잘못된 입력\n");
		break;
	}
}
void season2(int num) {
	switch (num)
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
			printf("잘못된 입력\n");
			break;
	}
}

int age() {
	int birth;
	printf("태어난 연도 입력 : ");
	scanf_s("%d", &birth);
	int age = 2023 - birth;

	return age;
}

int age2(int birth) {
	int age = 2023 - birth;

	return age;
}

int main() {
	// 1
	printf("문제1\n");
	int num;
	printf("몇 월 ? ");
	scanf_s("%d", &num);
	switch (num)
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
		printf("잘못된 입력\n");
		break;
	}

	printf("\n");
	printf("\n");

	// 2
	printf("문제2\n");
	season();

	printf("\n");
	printf("\n");

	// 3
	printf("문제3\n");
	printf("몇 월 ? ");
	scanf_s("%d", &num);
	season2(num);

	printf("\n");
	printf("\n");

	// 4
	printf("문제4\n");
	printf("나이 : %d\n", age());

	printf("\n");
	printf("\n");

	// 5
	printf("문제5\n");
	int birth;
	printf("태어난 연도 : ");
	scanf_s("%d", &birth);
	printf("나이 : %d\n", age2(birth));

	return 0;
}