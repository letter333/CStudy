#include <stdio.h>
int main() {
	// 1
	char input[1024];
	printf("���ڿ� �Է� : ");
	gets(input);
	for (int i = 0; input[i] != '\0'; i++) {
		if (input[i] >= 'a' && input[i] <= 'z') {
			input[i] -= 32;
		}
	}
	printf("�빮�ڷ� �ٲٱ� : %s\n", input);

	// 2
	printf("���ڿ� �Է� : ");
	gets(input);
	for (int i = 0; input[i] != '\0'; i++) {
		if (input[i] >= 'A' && input[i] <= 'Z') {
			input[i] += 32;
		}
	}
	printf("�ҹ��ڷ� �ٲٱ� : %s\n", input);

	// 3
	printf("���ڿ� �Է� : ");
	gets(input);
	for (int i = 0; input[i] != '\0'; i++) {
		if (input[i] >= 'A' && input[i] <= 'Z') {
			input[i] += 32;
		}
		else if (input[i] >= 'a' && input[i] <= 'z') {
			input[i] -= 32;
		}
	}
	printf("��ҹ��� �ٲٱ� : %s\n", input);
	
	// 4
	printf("���ڿ� �Է� : ");
	gets(input);
	for (int i = sizeof(input) / sizeof(char); i >= 0; i--) {
		if (input[i] == '\0') {
			for (int j = i; j >= 0; j--) {
				if (input[j] >= 'A' && input[j] <= 'Z') {
					input[j] += 32;
				}
				else if (input[j] >= 'a' && input[j] <= 'z') {
					input[j] -= 32;
				}
				printf("%c", input[j]);
			}
		}
		else {
			continue;
		}
	}
	printf("\n\n");

	// 5
	char s[1024];
	int cnt[26] = {0, };
	printf("���ڿ� �Է� : ");
	gets(s);
	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			s[i] += 32;
		}
	}
	int idx = 0;
	for (int i = 0; s[i] != '\0'; i++) {
		idx = s[i] - 'a';
		cnt[idx]++;
	}

	for (int i = 0; i < 26; i++) {
		if (cnt[i] == 0) {
			continue;
		}
		printf("'%c'�� %d���� �Դϴ�.\n", i + 'a', cnt[i]);
	}

	// 6
	char cur = '\0';
	int check[26] = { 0, };
	int count = 0;
	idx = 0;
	for (int i = 0; s[i] != '\0'; i++) {
		if (cur == s[i]) {
			count++;
			continue;
		}
		else {
			idx = s[i] - 'a';
			if (check[idx] == 0) {
				count++;
				check[idx]++;
				printf("%c�� %d��°���� ó�� �����մϴ�.\n", s[i], count);
			}
			else {
				count++;
			}
		}
	}

	// 7


	return 0;
}