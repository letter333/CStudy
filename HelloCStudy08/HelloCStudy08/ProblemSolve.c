#include <stdio.h>
int main() {
	//1. ������ 2�ܺ��� 9�ܱ����� ���� 2���� �迭�� ����
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
	//2. ������ 10�ܺ��� 19�ܱ����� ���� 2���� �迭�� ����
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

	//3. 1������ ���� �迭�� �� �� ���غ�����.
	int sum1 = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 9; j++) {
			sum1 += arr1[i][j];
		}
	}
	printf("�迭1 ���� : %d\n", sum1);
	
	//4. 2������ ���� �迭�� �� �� ���غ�����.
	int sum2 = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 9; j++) {
			sum2 += arr2[i][j];
		}
	}
	printf("�迭2 ���� : %d\n", sum2);

	//5. 4, 5�� ����� ���ؼ� ����غ�����.
	printf("�� : %d\n", sum1 + sum2);

	return 0;
}