#include <stdio.h>
int main() {
	int stuNum[5][4];

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d층의 %d번 강의실 학생의 수 입력 : ", i + 1, j + 1);
			scanf_s("%d", &stuNum[i][j]);
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d층의 %d번 강의실 학생의 수 출력 : %d\n", i + 1, j + 1, stuNum[i][j]);
		}
	}



	return 0;
}