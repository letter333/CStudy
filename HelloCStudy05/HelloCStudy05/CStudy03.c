#include <stdio.h>
int main() {
	// for������ ���ѷ��� �����
	/*
	for (;;) {
		printf("a");
	}
	for (int i = 0; i < 0;) {
		printf("a");
	}
	for (int i = 0;; i++) {
		printf("%d", i);
	}
	*/

	// �ݺ����� �̿��ؼ� ���ڿ� �ȿ� �ִ�
	// ������ �ϳ��ϳ� � ���� �ִ�.
	char name[100];
	printf("�̸��� ����? : ");
	gets(name);
	for (int i = 0; name[i] != '\0'; i++) {
		printf("%c", name[i]);
	}

	return 0;
}