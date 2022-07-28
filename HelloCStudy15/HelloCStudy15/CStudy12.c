#include <stdio.h>

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
	default:
		return "����";
	}
}

int length(char* str) {
	int len = 0;
	while (str[len] != NULL) {
		len++;
	}

	return len;
}

int main() {
	printf("%s\n", season(4));
	printf("%s\n", season(-1));
	printf("%s\n", season(13));
	printf("%s\n", season(12));
	printf("%s\n", season(6));
	printf("%s\n", season(3));

	printf("%d\n", length("abcd12434"));

	return 0;
}