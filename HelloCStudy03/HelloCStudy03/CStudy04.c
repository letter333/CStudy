#include <stdio.h>
int main() {
	int age = 10;
	if (age > 0) 
	{
		printf("age�� ���\n");
	}

	age = -1;
	if (age < 0) 
	{
		printf("age�� ����\n");
		printf("���̴� ������ �� ����\n");
	}

	if (age > 0)
	{
		printf("age�� ���\n");
	} 
	else
	{
		printf("age�� ����� �ƴ�.\n");
	}

	age = 10;

	if (age > 0)
	{
		if (age % 2 == 0)
			printf("\n\n\n\n¦\n");
		else
			printf("\n\n\n\nȦ\n");
	}

	if (age > 0 && age % 2 == 0)
		printf("age�� �ڿ����̸鼭 ¦��\n");
	if (age > 0 || age % 2 != 0)
		printf("age�� �ڿ����̰ų� Ȥ�� Ȧ��\n");



	return 0;
}