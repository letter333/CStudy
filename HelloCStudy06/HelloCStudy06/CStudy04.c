#include <stdio.h>
int main() {
	int stu_numbers[100];
	for (int i = 1; i <= 100; i++) {
		stu_numbers[i - 1] = i;
	}

	int numbers[5] = { 10, 20, 30, 40, 50 };
	printf("%d %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]);

	int* ptr = stu_numbers;
	ptr[50] = 1000;
	printf("%d\n", stu_numbers[50]);

	printf("[2]번째(세번째)값 변경하기 \n");
	scanf_s("%d", ptr + 2);
	printf("\n%d\n", stu_numbers[2]);
	printf("%d\n", ptr[2]);

	printf("%d %d %d %d\n", ptr[2], *(ptr + 2), stu_numbers[2], *(stu_numbers + 2));

	int my_nums[5] = { 50, 60, 70, 80, 90 };
	ptr = my_nums;
	printf("%d\n", ptr[2]);

	// stu_numbers = my_nums 는 불가능. 배열의 이름은 포인터 상수이기 때문.

	return 0;
}