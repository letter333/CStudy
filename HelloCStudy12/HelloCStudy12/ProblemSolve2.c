#include <stdio.h>
struct MyStruct
{
	int width;
	int height;
} typedef Rectangle;

int area(Rectangle r) {
	int area = r.width * r.height;

	return area;
}

int main() {
	Rectangle r1 = { .width = 3, .height = 5 };
	int res1 = area(r1);
	printf("�簢��1�� ���� : %d\n", res1);

	Rectangle r2;
	printf("�簢��2�� width�� height : ");
	scanf_s("%d %d", &r2.width, &r2.height);
	int res2 = area(r2);
	printf("�簢��2�� ���� : %d\n", res2);


	return 0;
}