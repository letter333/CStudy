#include <stdio.h>
int main() {
	char thee[10];
	int year;
	printf("����? ");
	scanf_s("%d", &year);
	switch (year % 12)
	{
	case 0:
		strcpy(thee, "������");
		break;
	case 1:
		strcpy(thee, "��");
		break;
	case 2:
		strcpy(thee, "��");
		break;
	case 3:
		strcpy(thee, "����");
		break;
	case 4:
		strcpy(thee, "��");
		break;
	case 5:
		strcpy(thee, "��");
		break;
	case 6:
		strcpy(thee, "ȣ����");
		break;
	case 7:
		strcpy(thee, "�䳢");
		break;
	case 8:
		strcpy(thee, "��");
		break;
	case 9:
		strcpy(thee, "��");
		break;
	case 10:
		strcpy(thee, "��");
		break;
	case 11:
		strcpy(thee, "��");
		break;
	default:
		printf("fault\n");
		return -1;
	}

	printf("%s\n", thee);

	return 0;
}