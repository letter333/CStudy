#include <stdio.h>
#include <string.h>
int main() {
	// 1
	int n[5];

	printf("���� 5�� �Է� : ");
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

	printf("�ִ� : %d\n", max);
	printf("�ּ� : %d\n", min);

	// 2
	char s1[100];
	char s2[100];

	printf("ù��° ���ڿ� �Է� : ");
	rewind(stdin);
	gets(s1);
	printf("�ι�° ���ڿ� �Է� : ");
	rewind(stdin);
	gets(s2);

	/*int ret = strcmp(s1, s2);
	if (ret == 0) {
		printf("����\n");
	}
	else {
		printf("�ٸ�\n");
	}*/

	for (int i = 0; i < sizeof(s1) / sizeof(char); i++) {
		if (s1[i] != '\0') {
			if (s1[i] == s2[i]) {
				continue;
			}
			else {
				printf("�ٸ�\n");
				break;
			}
		}
		else {
			printf("����\n");
			break;
		}
	}

	return 0;
}