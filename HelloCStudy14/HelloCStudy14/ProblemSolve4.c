#include <stdio.h>
void season() {
	int num;
	printf("�� �� ? ");
	scanf_s("%d", &num);
	switch (num)
	{
	case 12:
	case 1:
	case 2:
		printf("�ܿ�\n");
		break;
	case 3:
	case 4:
	case 5:
		printf("��\n");
		break;
	case 6:
	case 7:
	case 8:
		printf("����\n");
		break;
	case 9:
	case 10:
	case 11:
		printf("����\n");
		break;
	default:
		printf("�߸��� �Է�\n");
		break;
	}
}
void season2(int num) {
	switch (num)
	{
		case 12:
		case 1:
		case 2:
			printf("�ܿ�\n");
			break;
		case 3:
		case 4:
		case 5:
			printf("��\n");
			break;
		case 6:
		case 7:
		case 8:
			printf("����\n");
			break;
		case 9:
		case 10:
		case 11:
			printf("����\n");
			break;
		default:
			printf("�߸��� �Է�\n");
			break;
	}
}

int age() {
	int birth;
	printf("�¾ ���� �Է� : ");
	scanf_s("%d", &birth);
	int age = 2023 - birth;

	return age;
}

int age2(int birth) {
	int age = 2023 - birth;

	return age;
}

int main() {
	// 1
	printf("����1\n");
	int num;
	printf("�� �� ? ");
	scanf_s("%d", &num);
	switch (num)
	{
	case 12:
	case 1:
	case 2:
		printf("�ܿ�\n");
		break;
	case 3:
	case 4:
	case 5:
		printf("��\n");
		break;
	case 6:
	case 7:
	case 8:
		printf("����\n");
		break;
	case 9:
	case 10:
	case 11:
		printf("����\n");
		break;
	default:
		printf("�߸��� �Է�\n");
		break;
	}

	printf("\n");
	printf("\n");

	// 2
	printf("����2\n");
	season();

	printf("\n");
	printf("\n");

	// 3
	printf("����3\n");
	printf("�� �� ? ");
	scanf_s("%d", &num);
	season2(num);

	printf("\n");
	printf("\n");

	// 4
	printf("����4\n");
	printf("���� : %d\n", age());

	printf("\n");
	printf("\n");

	// 5
	printf("����5\n");
	int birth;
	printf("�¾ ���� : ");
	scanf_s("%d", &birth);
	printf("���� : %d\n", age2(birth));

	return 0;
}