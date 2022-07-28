#include <stdio.h>
int main() {
	char thee[10];
	int year;
	printf("¸î³â»ı? ");
	scanf_s("%d", &year);
	switch (year % 12)
	{
	case 0:
		strcpy(thee, "¿ø¼şÀÌ");
		break;
	case 1:
		strcpy(thee, "´ß");
		break;
	case 2:
		strcpy(thee, "°³");
		break;
	case 3:
		strcpy(thee, "µÅÁö");
		break;
	case 4:
		strcpy(thee, "Áã");
		break;
	case 5:
		strcpy(thee, "¼Ò");
		break;
	case 6:
		strcpy(thee, "È£¶ûÀÌ");
		break;
	case 7:
		strcpy(thee, "Åä³¢");
		break;
	case 8:
		strcpy(thee, "¿ë");
		break;
	case 9:
		strcpy(thee, "¹ì");
		break;
	case 10:
		strcpy(thee, "¸»");
		break;
	case 11:
		strcpy(thee, "¾ç");
		break;
	default:
		printf("fault\n");
		return -1;
	}

	printf("%s\n", thee);

	return 0;
}