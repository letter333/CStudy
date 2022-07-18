#include <stdio.h>
int main() {
	int a = 10;
	int* ptr_a = &a;

	int** pp_aa = &ptr_a;

	int numbers[5] = { 1, 20, 50, 30, 4 };

	int multi_dim[3][2] = {
		{ 3, 4 }, { 1, 11 }, { 99, 22 }
	};

	int room[5] = { 30, 22, 25, 29, 27 };
	int r_room[3][5];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			r_room[i][j] = i + j + 10;
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d\n", r_room[i][j]);
		}
	}

	return 0;
}