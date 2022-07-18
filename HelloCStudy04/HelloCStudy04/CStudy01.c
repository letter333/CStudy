#include <stdio.h>
#define °¡À§ = 0;
#define ¹ÙÀ§ = 1;
enum ½ÊÀÌÁö½Å
{
	¿ø¼þÀÌ, ´ß, °³, µÅÁö, Áã, ¼Ò, È£¶ûÀÌ, Åä³¢, ¿ë, ¹ì, ¸», ¾ç
	//Áã=4,¼Ò,È£¶ûÀÌ,Åä³¢,¿ë,¹ì,¸»,¾ç,¿ø¼þÀÌ=0,´ß,°³,µÅÁö
};
int main() {
	const int º¸ = 2;
	if (0) {

		// Q1
		int month;
		printf("¸î¿ù ? ");
		scanf_s("%d", &month);

		// if
		if (month == 12 || month == 1 || month == 2) {
			printf("°Ü¿ï\n");
		}
		else if (month >= 3 && month <= 5) {
			printf("º½\n");
		}
		else if (month >= 6 && month <= 8) {
			printf("¿©¸§\n");
		}
		else if (month >= 9 && month <= 11) {
			printf("°¡À»\n");
		}
		else {
			printf("¾î´À º°¿¡¼­ ¿Ô´Ï?\n");
		}

		// switch
		switch (month)
		{
		case 12:
		case 1:
		case 2:
			printf("°Ü¿ï\n");
			break;
		case 3:
		case 4:
		case 5:
			printf("º½\n");
			break;
		case 6:
		case 7:
		case 8:
			printf("¿©¸§\n");
			break;
		case 9:
		case 10:
		case 11:
			printf("°¡À»\n");
			break;
		default:
			printf("ºê¶ó¿î¾ÆÀÌµå°É½º - My Style\n");
			break;
		}
	}
	if (0) {

		// Q2
		printf("°¡À§ ¹ÙÀ§ º¸? (ÇÃ·¹ÀÌ¾î 1) : ");
		int p1, p2;
		scanf_s("%d", &p1);
		printf("°¡À§ ¹ÙÀ§ º¸? (ÇÃ·¹ÀÌ¾î 2) : ");
		scanf_s("%d", &p2);
		p1 %= 3;
		p2 %= 3;

		switch (p1)
		{
		case 0:
			printf("p1 : °¡À§\n");
			switch (p2)
			{
			case 0:
				printf("p2 : °¡À§\n");
				printf("¹«½ÂºÎ\n");
				break;
			case 1:
				printf("p2 : ¹ÙÀ§\n");
				printf("Áü\n");
				break;
			case 2:
				printf("p2 : º¸\n");
				printf("½Â¸®\n");
				break;
			default:
				break;
			}
			break;
		case 1:
			printf("p1 : ¹ÙÀ§\n");
			switch (p2)
			{
			case 0:
				printf("p2 : °¡À§\n");
				printf("ÀÌ±è\n");
				break;
			case 1:
				printf("p2 : ¹ÙÀ§\n");
				printf("¹«½ÂºÎ\n");
				break;
			case 2:
				printf("p2 : º¸\n");
				printf("Áü\n");
				break;
			default:
				break;
			}
			break;
		case 2:
			printf("p1 : º¸\n");
			switch (p2)
			{
			case 0:
				printf("p2 : °¡À§\n");
				printf("Áü\n");
				break;
			case 1:
				printf("p2 : ¹ÙÀ§\n");
				printf("ÀÌ±è\n");
				break;
			case 2:
				printf("p2 : º¸\n");
				printf("¹«½ÂºÎ\n");
				break;
			default:
				break;
			}
			break;
		default:
			break;
		}
	}

	// Q3
	printf("¸î³â»ý? ");
	int year;
	scanf_s("%d", &year);

	switch (year%12)
	{
	case 0:
		printf("¿ø¼þÀÌ\n");
		break;
	case 1:
		printf("´ß\n");
		break;
	case 2:
		printf("°³\n");
		break;
	case 3:
		printf("µÅÁö\n");
		break;
	case 4:
		printf("Áã\n");
		break;
	case 5:
		printf("¼Ò\n");
		break;
	case 6:
		printf("È£¶ûÀÌ\n");
		break;
	case 7:
		printf("Åä³¢\n");
		break;
	case 8:
		printf("¿ë\n");
		break;
	case 9:
		printf("¹ì\n");
		break;
	case 10:
		printf("¸»\n");
		break;
	case 11:
		printf("¾ç\n");
		break;
	default:
		break;
	}

	int myThee = year % 12;
	if (myThee == ¿ø¼þÀÌ) 
	{
		printf("¿ø¼þÀÌ\n");
	}
	else if (myThee == ´ß)
	{
		printf("´ß\n");
	}
	else if (myThee == °³) 
	{
		printf("°³\n");
	}
	else if (myThee == µÅÁö)
	{
		printf("µÅÁö\n");
	}
	else if (myThee == Áã)
	{
		printf("Áã\n");
	}
	else if (myThee == ¼Ò)
	{
		printf("¼Ò\n");
	}
	else if (myThee == È£¶ûÀÌ)
	{
		printf("È£¶ûÀÌ\n");
	}
	else if (myThee == Åä³¢)
	{
		printf("Åä³¢\n");
	}
	else if (myThee == ¿ë)
	{
		printf("¿ë\n");
	}
	else if (myThee == ¹ì)
	{
		printf("¹ì\n");
	}
	else if (myThee == ¸»)
	{
		printf("¸»\n");
	}
	else if (myThee == ¾ç)
	{
		printf("¾ç\n");
	}

	return 0;
}
