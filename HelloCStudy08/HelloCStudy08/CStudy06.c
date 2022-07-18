#include <stdio.h>
int main() {
	// 2단부터 9단 값을 2차원에 저장
	int gugu1[8][9];
	int row = sizeof(gugu1) / sizeof(gugu1[0]);
	int col = sizeof(gugu1[0]) / sizeof(gugu1[0][0]); //sizeof(int);
	printf("%d행 %d열\n", row, col);

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			gugu1[i][j] = (i + 2) * (j + 1);
		}
	}

	// 2
	int gugu2[10][9];
	int gugu2_row = sizeof(gugu2) / sizeof(gugu2[0]);
	for (int i = 0; i < gugu2_row; i++) {
		for (int j = 0; j < col; j++) {
			gugu2[i][j] = (i + 10) * (j + 1);
		}
	}

	// 3
	int sum1 = 0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			sum1 += gugu1[i][j];
		}
	}

	// 4
	int sum2 = 0;
	for (int i = 0; i < gugu2_row; i++) {
		for (int j = 0; j < col; j++) {
			sum2 += gugu2[i][j];
		}
	}

	// 5
	int sum3 = sum1 + sum2;
	printf("2~9단 합 : %d\n", sum1);
	printf("10~19단 합 : %d\n", sum2);
	printf("총합 : %d\n", sum3);

	// 6 
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (gugu1[i][j] < 10) {
				printf("  ");
			}
			else if (gugu1[i][j] < 100) {
				printf(" ");
			}
			printf("%d ", gugu1[i][j]);
		}
		printf("\n");
	}

	// 7
	for (int i = 0; i < gugu2_row; i++) {
		for (int j = 0; j < col; j++) {
			if (gugu2[i][j] < 10) {
				printf("  ");
			}
			else if (gugu2[i][j] < 100) {
				printf(" ");
			}
			printf("%d ", gugu2[i][j]);
		}
		printf("\n");
	}

	return 0;
}