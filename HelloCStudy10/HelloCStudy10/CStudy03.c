#include <stdio.h>
#include "myTest.h"
#include "yourTest.h"
void test();
int main() {
	test();
	myTest();
	yourTypeTest(10);

	return 0;
}
void test() {
	printf("�Լ� �׽�Ʈ\n");
}