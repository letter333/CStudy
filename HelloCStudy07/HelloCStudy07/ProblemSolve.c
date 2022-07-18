#include <stdio.h>
#include <string.h>
int main() {
	// 1
	int n[5];

	printf("숫자 5개 입력 : ");
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &n[i]);
	}

	int max = n[0];
	int min = n[0];
	for (int i = 0; i < 5; i++) {
		if (n[i] > max) {
			max = n[i];
		}

		if (n[i] < min) {
			min = n[i];
		}
	}

	printf("최대 : %d\n", max);
	printf("최소 : %d\n", min);

	// 2
	char s1[100];
	char s2[100];

	printf("첫번째 문자열 입력 : ");
	rewind(stdin);
	gets(s1);
	printf("두번째 문자열 입력 : ");
	rewind(stdin);
	gets(s2);

	/*int ret = strcmp(s1, s2);
	if (ret == 0) {
		printf("같음\n");
	}
	else {
		printf("다름\n");
	}*/

	for (int i = 0; i < sizeof(s1) / sizeof(char); i++) {
		if (s1[i] != '\0') {
			if (s1[i] == s2[i]) {
				continue;
			}
			else {
				printf("다름\n");
				break;
			}
		}
		else {
			printf("같음\n");
			break;
		}
	}

	return 0;
}