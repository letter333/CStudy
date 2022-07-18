#include <stdio.h>
int main() {
	// 조건문 문제
	if (0) {
		int m;
		printf("태어난 월 : ");
		scanf_s("%d", &m);

		switch (m)
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

		int p1, p2;
		printf("숫자 입력(player1 player2) : ");
		rewind(stdin);
		scanf_s("%d %d", &p1, &p2);
		p1 %= 3;
		p2 %= 3;
		// 0 가위 1 바위 2 보

		switch (p1)
		{
		case 0:
			switch (p2)
			{
			case 0:
				printf("무승부\n");
				break;
			case 1:
				printf("패배\n");
				break;
			case 2:
				printf("승리\n");
				break;
			default:
				printf("잘못된 입력\n");
				break;
			}
			break;
		case 1:
			switch (p2)
			{
			case 0:
				printf("승리\n");
				break;
			case 1:
				printf("무승부\n");
				break;
			case 2:
				printf("패배\n");
				break;
			default:
				printf("잘못된 입력\n");
				break;
			}
			break;
		case 2:
			switch (p2)
			{
			case 0:
				printf("패배\n");
				break;
			case 1:
				printf("승리\n");
				break;
			case 2:
				printf("무승부\n");
				break;
			default:
				printf("잘못된 입력\n");
				break;
			}
			break;
		default:
			printf("잘못된 입력\n");
			break;
		}

		int y;
		printf("태어난 연도 : ");
		rewind(stdin);
		scanf_s("%d", &y);

		y %= 12; // 0 = 원숭이

		switch (y)
		{
		case 0:
			printf("원숭이 띠\n");
			break;
		case 1:
			printf("닭 띠\n");
			break;
		case 2:
			printf("개 띠\n");
			break;
		case 3:
			printf("돼지 띠\n");
			break;
		case 4:
			printf("쥐 띠\n");
			break;
		case 5:
			printf("소 띠\n");
			break;
		case 6:
			printf("호랑이 띠\n");
			break;
		case 7:
			printf("토끼 띠\n");
			break;
		case 8:
			printf("용 띠\n");
			break;
		case 9:
			printf("뱀 띠\n");
			break;
		case 10:
			printf("말 띠\n");
			break;
		case 11:
			printf("양 띠\n");
			break;
		default:
			printf("잘못된 입력\n");
			break;
		}
	}

	// 반복문 문제
	// 1
	int sum = 0;
	for (int i = 1; i <= 100; i++) {
		sum += i;
	}

	printf("%d\n", sum);

	// 2
	sum = 0;
	for (int i = 1; i <= 100; i++) {
		if (i % 3 == 0) {
			sum += i;
		}
	}
	printf("%d\n", sum);

	// 3
	int n;
	printf("n값 입력 : ");
	scanf_s("%d", &n);
	int res = 1;
	for (int i = 1; i <= n; i++) {
		res *= i;
	}
	printf("%d\n", res);

	// 4
	printf("값 입력 : ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	// 5
	printf("값 입력 : ");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++) {
			printf(" ");
		}
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	// 6
	printf("값 입력 : ");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++) {
			printf(" ");
		}
		for (int j = 1; j <= i * 2 - 1; j++) {
			printf("*");
		}
		printf("\n");
	}

	// 7
	printf("값 입력 : ");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++) {
			printf(" ");
		}
		for (int j = 1; j <= i * 2 - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 1; i < n; i++) {
		for (int j = 1; j <= i; j++) {
			printf(" ");
		}
		for (int j = 1; j <= (n - i) * 2 - 1; j++) {
			printf("*");
		}
		printf("\n");
	}




	return 0;
}