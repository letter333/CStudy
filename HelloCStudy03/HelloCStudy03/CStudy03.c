#include <stdio.h>
int main() {
	int age;
	printf("�� �� ? ");
	scanf_s("%d", &age);
	age < 20 ? printf("����\n") : printf("����\n");

	age < 20 ?
		age < 0 ? printf("����\n") : printf("����\n") 
		: printf("����\n");

	printf("\n���� �Է� : ");
	int num;
	scanf_s("%d", &num);

	num > 0 ? printf("\n���\n") : (num == 0 ? printf("\n0\n") : printf("\n����\n"));

	return 0;
}