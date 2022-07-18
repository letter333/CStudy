#include <stdio.h>

int recul(int n) {
	if (n == 1) {
		return 1;
	}

	return n * recul(n - 1);
}
int main() {
	int n = 10;

	int res = recul(n);
	printf("result = %d\n", res);

	return 0;
}