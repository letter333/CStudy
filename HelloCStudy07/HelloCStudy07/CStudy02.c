#include <stdio.h>
int main() {
	// 출력
	int number;
	printf("숫자 입력하세요 : ");
	scanf_s("%d", &number);
	// number 변수의 주소(위치)에 접근
	// 그리고 그 안에 들어갈 값을 집어넣음
	
	printf("number=%d\n", number);
	if (number > 0) {
		printf("number는 양수\n");
	}
	else if (number == 0) {
		printf("number은 0\n");
	}
	else  {
		printf("number은 음수\n");
	}


	return 0;
}