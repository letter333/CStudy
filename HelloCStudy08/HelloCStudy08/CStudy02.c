#include <stdio.h>
#define MAX 1024
int main() {
	char input[MAX] = { NULL };
	printf("���� �Է� : ");
	gets(input);
	int charAlpha[26] = { 0 };
	for (int i = 0; input[i] != NULL; i++) {
		if (input[i] >= 'A' && input[i] <= 'Z') {
			input[i] += ('a' - 'A');
		}
		
		if (input[i] < 'a' || input[i] > 'z') {
			continue;
		}
		else {
			if (charAlpha[input[i] - 'a'] == 0) {
				charAlpha[input[i] - 'a'] = i + 1;
			}
		}
	}

	for (int i = 0; i < 26; i++) {
		if (charAlpha[i] != 0) {
			printf("%c�� %d��° ���ʵ���\n", 'a' + i, charAlpha[i]);
		}
	}

	return 0;
}