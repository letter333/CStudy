#include <stdio.h>
int main() {
	char input[1024] = { NULL, };
	printf("���ڿ� �Է� : ");
	gets(input);
	int charAlpha[26] = { 0 };
	for (int i = 0; input[i] != NULL; i++) {
		if (input[i] >= 'A' && input[i] <= 'Z') {
			input[i] += 32;
		}
		if (input[i] < 'a' || input[i] > 'z') {
			if (input[i] = ' ') {
				continue;
			}
			printf("����\n");
			return 0;
		}
		else {
			charAlpha[input[i] - 'a']++;
		}
	}
	for (int i = 0; i < 26; i++) {
		if (charAlpha[i] != 0) {
			printf("'%c'�� %d�����Դϴ�.\n", 'a' + i, charAlpha[i]);
		}
	}
	
	return 0;
}