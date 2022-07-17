#include <stdio.h>
int main() {
	int age = 10;
	if (age > 0) 
	{
		printf("age는 양수\n");
	}

	age = -1;
	if (age < 0) 
	{
		printf("age는 음수\n");
		printf("나이는 음수일 수 없음\n");
	}

	if (age > 0)
	{
		printf("age는 양수\n");
	} 
	else
	{
		printf("age는 양수가 아님.\n");
	}

	age = 10;

	if (age > 0)
	{
		if (age % 2 == 0)
			printf("\n\n\n\n짝\n");
		else
			printf("\n\n\n\n홀\n");
	}

	if (age > 0 && age % 2 == 0)
		printf("age는 자연수이면서 짝수\n");
	if (age > 0 || age % 2 != 0)
		printf("age는 자연수이거나 혹은 홀수\n");



	return 0;
}