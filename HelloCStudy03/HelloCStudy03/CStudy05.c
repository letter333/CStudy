#include <stdio.h>
int main() {
	if (0) {
		int x, y;
		printf("숫자 두 개 입력 : ");
		scanf_s("%d %d", &x, &y);

		if (x > 0 && y > 0) {
			printf("1\n");
		}
		else if (x < 0 && y > 0) {
			printf("2\n");
		}
		else if (x < 0 && y < 0) {
			printf("3\n");
		}
		else if (x > 0 && y < 0) {
			printf("4\n");
		}
		else {
			printf("0\n");
		}
	}
	if (0) {
#pragma region 두번째 문제
		printf("나이 입력 : ");
		int age;
		scanf_s("%d", &age);
		if (age < 0 || age > 200) {
			printf("\n타노스\n");
		}
		else
		{
			if (age < 20) {
				printf("\n미성년자\n");
			}
			else if (age >= 20 && age <= 50) {
				printf("\n사회의 주 구성원\n");
			}
			else if (age <= 70) {
				printf("\n관리자\n");
			}
			else {
				printf("\n지혜의 도서관\n");
			}
		}
#pragma endregion
	}

	int h, m;

	printf("시간 입력 : ");
	scanf_s("%d", &h);

	h %= 24;

	printf("분 입력 : ");
	scanf_s("%d", &m);

	m %= 60;

	printf("45분전 시간 세팅\n");

	m = m - 45;
	if (m < 0) {
		m += 60;
		h -= 1;
		if (h < 0) {
			h += 24;
		}
	}
	printf("%d시 %d분\n", h, m);

	return 0;
}