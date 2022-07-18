#include <stdio.h>
int main() {
	// for문으로 무한루프 만들기
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

	// 반복문을 이용해서 문자열 안에 있는
	// 내용을 하나하나 까볼 수도 있다.
	char name[100];
	printf("이름이 뭔가? : ");
	gets(name);
	for (int i = 0; name[i] != '\0'; i++) {
		printf("%c", name[i]);
	}

	return 0;
}