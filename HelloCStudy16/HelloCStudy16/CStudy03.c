#include <stdio.h>
int main() {
	int ages[3][5] = {
		{20, 25, 32, 33, 31},
		{21, 52, 23, 30, 35},
		{27, 24, 22, 23, 25}
	};

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			//ages[i][j] = 10;
			scanf_s("%d", &ages[i][j]);
			printf("%d\n", ages[i][j]);
		}
	}
}