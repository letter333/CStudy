#include <stdio.h>
char* outputThee(int year) {

	switch (year % 12)
	{
	case 0:
		return "¿ø¼þÀÌ";
	case 1:
		return "´ß";
	case 2:
		return "°³";
	case 3:
		return "µÅÁö";
	case 4:
		return "Áã";
	case 5:
		return "¼Ò";
	case 6:
		return "È£¶ûÀÌ";
	case 7:
		return "Åä³¢";
	case 8:
		return "¿ë";
	case 9:
		return "¹ì";
	case 10:
		return "¸»";
	case 11:
		return "¾ç";
	default:
		return "¿À·ù";
	}
}

char* moreEasy(int year) {
	year %= 12;
	static char thees[12][10] = { "¿ø¼þÀÌ", "´ß", "°³", "µÅÁö", "Áã", "¼Ò", "È£¶ûÀÌ", "Åä³¢", "¿ë", "¹ì", "¸»", "¾ç" };

	return thees[year];
}

int main() {
	int year;
	printf("¸î³â»ý? ");
	scanf_s("%d", &year);
	

	printf("%s\n", outputThee(year));
	printf("%s\n", moreEasy(year));

	return 0;
}