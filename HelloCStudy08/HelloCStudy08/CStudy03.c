#include <stdio.h>
int main() {
	int input;
	scanf_s("%d", &input);
	int max = 1; // 벌집 번호
	int count = 0; // 그룹 번호
	while (1) {
		max = max + (6 * count);
		if (max < input) {
			count++;
			continue;
		}
		else {
			printf("%d은/는 %d번째 그룹\n", input, count + 1);
			break;
		}
	}

	return 0;
}