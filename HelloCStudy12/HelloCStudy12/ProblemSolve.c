#include <stdio.h>
#include <stdlib.h>
int findMin(int arr[], int size) {
	int min = arr[0];
	int idx = 0;
	for (int i = 0; i < size; i++) {
		if (min > arr[i]) {
			min = arr[i];
			idx = i;
		}
	}

	return idx;
}

int main() {
	// 1
	int size;
	printf("�迭�� ũ�� �Է� : ");

	// 2
	scanf_s("%d", &size);
	int* arr = (int*)calloc(size, sizeof(int));

	for (int i = 0; i < size; i++) {
		int n;
		scanf_s("%d", &n);
		arr[i] = n;
	}
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	// 3
	int max = arr[0];
	int idx = 0;
	for (int i = 1; i < size; i++) {
		if (max < arr[i]) {
			max = arr[i];
			idx = i;
		}
	}
	printf("�迭�� ���� ū ���� %d, �ε��� %d\n", max, idx);

	// 4
	int res = findMin(arr, size);
	printf("���� ���� ������ �ε��� : %d\n", res);

	return 0;
}