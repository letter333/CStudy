#include <stdio.h>
int main() {
	// 1
	int a, b, c;
	printf("a b c ÀÔ·Â : ");
	scanf_s("%d %d %d", &a, &b, &c);

	int sum = 0;
	for (int i = a; i <= b; i++) {
		if (i % c == 0) {
			continue;
		}
		sum += i;
	}
	printf("sum=%d\n", sum);

	// 2
	int inputSugar;
	printf("¼³ÅÁ ¸î kg?");
	scanf_s("%d", &inputSugar);
	int pack = 0;
	while (1) {
		if (inputSugar % 5 == 0) {
			pack += inputSugar / 5;
			printf("%d¹­À½\n", pack);
			break;
		}
		inputSugar -= 3;
		pack++;
		if (inputSugar < 0) {
			printf("-1\n");
			break;
		}
	}

	return 0;
}