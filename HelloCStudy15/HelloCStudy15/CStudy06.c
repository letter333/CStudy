#include <stdio.h>
void printYourName(char n[]) {
	printf("����� �̸��� %s�Դϴ�.\n", n);
}

char* printABC() {
	return "abc\n";
}

char* returnMyInfo() {
	static char mbti[5];
	printf("mbti? ");
	gets(mbti);
	return mbti;
}

char* returnMyMBTI(char* mbti) {
	return mbti;
}

int main() {
	printf("�̸� �Է� ");
	char name[100];
	gets(name);
	printYourName(name);
	printf("%s\n", printABC());

	printf("%s\n", returnMyInfo());
	printf("%s\n", returnMyMBTI("infp"));
	printf("%s\n", returnMyMBTI(name));
	

	return 0;
}