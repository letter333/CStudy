#include <stdio.h>
int main() {
	char input[1024] = { NULL, };
	printf("문자열 입력 : ");
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
			printf("종료\n");
			return 0;
		}
		else {
			charAlpha[input[i] - 'a']++;
		}
	}
	for (int i = 0; i < 26; i++) {
		if (charAlpha[i] != 0) {
			printf("'%c'는 %d글자입니다.\n", 'a' + i, charAlpha[i]);
		}
	}
	
	return 0;
}