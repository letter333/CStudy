#include <stdio.h>

char* season(int month) {
	switch (month)
	{
	case 12:
	case 1:
	case 2:
		return "겨울";
	case 3:
	case 4:
	case 5:
		return "봄";
	case 6:
	case 7:
	case 8:
		return "여름";
	case 9:
	case 10:
	case 11:
		return "가을";
	default:
		return "오류";
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