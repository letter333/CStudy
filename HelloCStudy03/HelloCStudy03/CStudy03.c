#include <stdio.h>
int main() {
	int age;
	printf("몇 살 ? ");
	scanf_s("%d", &age);
	age < 20 ? printf("아이\n") : printf("성인\n");

	age < 20 ?
		age < 0 ? printf("음수\n") : printf("아이\n") 
		: printf("성인\n");

	printf("\n숫자 입력 : ");
	int num;
	scanf_s("%d", &num);

	num > 0 ? printf("\n양수\n") : (num == 0 ? printf("\n0\n") : printf("\n음수\n"));

	return 0;
}