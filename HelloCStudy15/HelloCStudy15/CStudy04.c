#include <stdio.h>
int calcAge() {
	int year;
	printf("��⵵ ? ");
	scanf_s("%d", &year);
	return 2023 - year;
}

int main() {
	int age = calcAge();
	printf("�� ���̴� %d�� �Դϴ�.\n", age);

	return 0;
}