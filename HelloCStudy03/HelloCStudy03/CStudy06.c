#include <stdio.h>
int main() {
	int rcp;
	scanf_s("%d", &rcp);

	switch (rcp)
	{
	case 0:
		printf("\n����");
		break;
	case 1:
		printf("\n����");
		break;
	case 2:
		printf("\n��");
		break;
	default:
		printf("\n��Ÿ");
		break;
	}
}