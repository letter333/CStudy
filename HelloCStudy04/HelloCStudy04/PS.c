#include <stdio.h>
int main() {
	// 1
	for (int i = 'A'; i <= 'Z'; i++) {
		printf("%c", i);
	}
	printf("\n\n");

	// 2
	for (int i = 'a'; i <= 'z'; i++) {
		printf("%c", i);
	}
	printf("\n\n");
	// A 65 // a 97

	// 3
	int a = 'A';
	int b = 'a';
	for (int i = 0; i <= ('Z' - 'A') * 2 + 1; i++) {
		if (i % 2 == 0) {
			printf("%c", a++);
		}
		else {
			printf("%c", b++);
		}
	}

	return 0;
}