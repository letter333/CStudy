#include <stdio.h>
int main() {
	int rcp;
	scanf_s("%d", &rcp);

	switch (rcp)
	{
	case 0:
		printf("\n가위");
		break;
	case 1:
		printf("\n바위");
		break;
	case 2:
		printf("\n보");
		break;
	default:
		printf("\n기타");
		break;
	}
}