#include <stdio.h>
int main() {
	int n;
	int res = 0;
	int cnt = 1;
	int newN = 0;
	scanf_s("%d", &n);
	if (n < 10) {
		n = n * 10 + n;
	}

	res = n / 10 + n % 10;
	newN = (n % 10) * 10 + res % 10;
	while (n!=newN) {
		res = newN / 10 + newN % 10;
		newN = (newN % 10 * 10) + (res % 10);
		cnt++;
	}

	printf("%d\n", cnt);

	return 0;
}