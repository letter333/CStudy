#include <stdio.h>
#include <string.h>
char* myDdi(int year) {
	switch (year % 12)
	{
	case 0:
		return "������";
	case 1:
		return "��";
	case 2:
		return "��";
	case 3:
		return "����";
	case 4:
		return "��";
	case 5:
		return "��";
	case 6:
		return "ȣ����";
	case 7:
		return "�䳢";
	case 8:
		return "��";
	case 9:
		return "��";
	case 10:
		return "��";
	case 11:
		return "��";
	default:
		return "����";
	}
}

char* ganzi(int year) {
	char zi[12][10] = { "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��" };
		char gan[10][10] = { "��", "��", "��", "��", "��", "��", "��", "��", "��", "��" };

	static char res[10] = "";
	strcat_s(res, 10, gan[year % 10]);
	strcat_s(res, 10, zi[year % 12]);
	// 2-1
	printf("%s��\n", res);

	return res;
}

char* season(int month) {
	switch (month)
	{
	case 12:
	case 1:
	case 2:
		return "�ܿ�";
	case 3:
	case 4:
	case 5:
		return "��";
	case 6:
	case 7:
	case 8:
		return "����";
	case 9:
	case 10:
	case 11:
		return "����";
	case -1:
		return "���� �ƴ�";
	default:
		return "����";
	}
}

int length(char str[]) {
	int len = 0;

	for (int i = 0; str[i] != NULL; i++) {
		len++;
	}

	return len;
}

int main() {
	// 1
	int year;
	printf("�¾ ���� �Է� : ");
	scanf_s("%d", &year);
	printf("%s\n", myDdi(year));

	// 2
	printf("%s��\n", ganzi(year));
	
	// 3
	int month;
	printf("�¾ �� �Է� : ");
	scanf_s("%d", &month);
	printf("%s\n", season(month));

	// 4
	char str[1024] = { NULL };
	printf("���ڿ� �Է� : ");
	rewind(stdin);
	gets(str);
	printf("���ڿ� ���� : %d\n", length(str));

	return 0;
}