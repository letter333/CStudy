#include <stdio.h>
int main() {
	// 1��
	printf("ù ��° ���� �Է� : ");
	char s1[1024];
	char s2[1024];
	gets(s1);
	//printf("�� ��° ���� �Է� : ");
	//gets(s2);
	int diff = 'a' - 'A';
	
	for (int i = 0; s1[i] != '\0'; i++) {
		if (s1[i] >= 'a' && s1[i] <= 'z') {
			s1[i] -= diff;
		}
	}
	printf("1. %s\n", s1);

	// 2��
	for (int i = 0; s1[i] != '\0'; i++) {
		if (s1[i] >= 'A' && s1[i] <= 'Z') {
			s1[i] += diff;
		}
	}
	printf("2. %s\n", s1);

	// 3��
	printf("���� �ٽ� �Է� : ");
	gets(s2);
	for (int i = 0; s2[i] != '\0'; i++) {
		if (s2[i] >= 'A' && s2[i] <= 'Z') {
			s2[i] += diff;
		}
		else if (s2[i] >= 'a' && s2[i] <= 'z') {
			s2[i] -= diff;
		}
	}
	printf("%s\n", s2);

	// 4��
	char r[1024];
	int index = 0;
	int count = 0;
	while (s2[index] != '\0') {
		index++;
	}
	for (int i = index - 1; i >= 0; i--, count++) {
		printf("%c", s2[i]);
		r[count] = s2[i];
	}
	r[count] = '\0';
	printf("\n%s\n", r);

	return 0;
}