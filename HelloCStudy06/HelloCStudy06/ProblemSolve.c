#include <stdio.h>
int main() {
	// 1
	int age;
	printf("나이 입력 : ");
	scanf_s("%d", &age);

	if (age < 0) {
		printf("음수\n");
	}
	else {
		switch (age / 10)
		{
			case 0:
				printf("응애응애\n");
				break;
			case 1:
				printf("급식먹는 친구들\n");
				break;
			case 2:
				printf("청춘\n");
				break;
			case 3:
				printf("일잘러\n");
				break;
			case 4:
				printf("관리자\n");
				break;
			default:
				printf("멋쟁이\n");
				break;
		}
	}

	// 2
	double score;
	printf("학점 : ");
	scanf_s("%lf", &score);
	if (score < 0) {
		printf("퇴학\n");
	}
	else if (score < 1.0) {
		printf("F\n");
	}
	else if (score < 2.0) {
		printf("D\n");
	}
	else if (score < 3.0) {
		printf("C\n");
	}
	else if (score < 4.0) {
		printf("B\n");
	}
	else if (score < 4.5) {
		printf("A\n");
	}
	else if (score == 4.5) {
		printf("A+\n");
	}
	else {
		printf("교수\n");
	}

	return 0;
}