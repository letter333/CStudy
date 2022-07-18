#include <stdio.h>
int main() {
	//1. 구구단 2단부터 9단까지의 값을 2차원 배열에 저장
	int arr1[8][9];
	for (int i = 2; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			arr1[i - 2][j - 1] = i * j;
		}
	}

	for (int i = 2; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			printf("%d ", arr1[i - 2][j - 1]);
		}
		printf("\n");
	}
	printf("\n\n");
	//2. 구구단 10단부터 19단까지의 값을 2차원 배열에 저장
	int arr2[10][9];
	for (int i = 0; i < 10; i++) {
		for (int j = 1; j <= 9; j++) {
			arr2[i][j - 1] = (i + 10) * j;
		}
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 1; j <= 9; j++) {
			printf("%d ", arr2[i][j - 1]);
		}
		printf("\n");
	}
	
	printf("\n\n");

	//3. 1번에서 만든 배열의 총 합 구해보세요.
	int sum1 = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 9; j++) {
			sum1 += arr1[i][j];
		}
	}
	printf("배열1 총합 : %d\n", sum1);
	
	//4. 2번에서 만든 배열의 총 합 구해보세요.
	int sum2 = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 9; j++) {
			sum2 += arr2[i][j];
		}
	}
	printf("배열2 총합 : %d\n", sum2);

	//5. 4, 5번 결과를 더해서 출력해보세요.
	printf("합 : %d\n", sum1 + sum2);

	return 0;
}