#include <stdio.h>
int main() {
	// 1
	int age;
	printf("���� �Է� : ");
	scanf_s("%d", &age);

	if (age < 0) {
		printf("����\n");
	}
	else {
		switch (age / 10)
		{
			case 0:
				printf("��������\n");
				break;
			case 1:
				printf("�޽ĸԴ� ģ����\n");
				break;
			case 2:
				printf("û��\n");
				break;
			case 3:
				printf("���߷�\n");
				break;
			case 4:
				printf("������\n");
				break;
			default:
				printf("������\n");
				break;
		}
	}

	// 2
	double score;
	printf("���� : ");
	scanf_s("%lf", &score);
	if (score < 0) {
		printf("����\n");
	}
	else if (score < 1.0) {
		printf("F\n");
	}
	else if (score < 2.0) {
		printf("D\n");
	}
	else if (score < 3.0) {
		printf("C\n");
	}
	else if (score < 4.0) {
		printf("B\n");
	}
	else if (score < 4.5) {
		printf("A\n");
	}
	else if (score == 4.5) {
		printf("A+\n");
	}
	else {
		printf("����\n");
	}

	return 0;
}