#include <stdio.h>
#include <stdlib.h>
int main() {
	int* dynamic_arr = (int*)malloc(5 * sizeof(int));
	for (int i = 0; i < 5; i++) {
		printf("%d\n", dynamic_arr[i]);
	}
	int size;
	printf("�迭 ������ ���� : ");
	scanf_s("%d", &size);
	int* dynamic_arr2 = (int*)malloc(size * sizeof(int));
	for (int i = 0; i < size; i++) {
		dynamic_arr2[i] = i + 10;
	}

	for (int i = 0; i < size; i++) {
		printf("%d\n", dynamic_arr2[i]);
	}
	// malloc -> �޸� �ʱ�ȭ x
	// calloc -> 0���� �ʱ�ȭ

	int* mynumbers = (int*)calloc(10, sizeof(int));

	for (int i = 0; i < 10; i++) {
		printf("%d\n", mynumbers[i]);
	}

	free(mynumbers);
	free(dynamic_arr);
	free(dynamic_arr2);

	return 0;
}