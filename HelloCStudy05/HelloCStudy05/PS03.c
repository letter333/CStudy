#include <stdio.h>
int main() {
	// 1

	int a, b, c;
	int sum = 0;
	printf("a, b, c�� : ");
	scanf_s("%d %d %d", &a, &b, &c);
	for (int i = a; i <= b; i++) {
		if (i % c == 0) {
			continue;
		}
		sum += i;
	}
	printf("c�� ����� ������ �� : %d\n", sum);

	// 2
	int sugar;
	printf("�䱸 ���� : ");
	scanf_s("%d", &sugar);
	int cnt = 0;

	while (1) {
		if (sugar % 5 == 0) {
			cnt += sugar / 5;
			printf("%d����\n", cnt);
			break;
		}
		sugar -= 3;
		cnt++;
		if (sugar < 0) {
			printf("-1");
			break;
		}
	}
	
	return 0;
}