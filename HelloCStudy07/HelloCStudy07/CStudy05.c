#include <stdio.h>
int main() {
	char c = 'A';
	char mbti[5] = "istp";
	char* m = mbti;

	char bType[3];
	bType[0] = 'A';
	bType[1] = 'B';
	bType[2] = '\0';

	char bloodType[3] = "AB";

	char name[7] = "이동준";

	char mbti2[100] = "entp";

	printf("mbti는 ? : ");
	gets(mbti);
	// gets뒤엔 rewind 필요 없음.
	
	printf("알파벳 하나 입력해보기 : ");
	rewind(stdin);
	c = getchar();
	printf("%s %c", mbti, c);
	printf("\n%s", bType);

	return 0;
}