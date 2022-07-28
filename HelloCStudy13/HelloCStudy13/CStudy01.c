#include <stdio.h>
#include <stdlib.h>
struct Student
{
	char name[100];
	int number;
} typedef Student;

// 1
void printInfo(Student s) {
	printf("%d번 학생 %s\n", s.number, s.name);
}

int main() {
	if (0) {
		Student s1 = { .number = 1, .name = "홍길동" };

		printf("%s %d\n", s1.name, s1.number);

		Student ss[3];
		ss[0] = (Student){ .number = 2, .name = "오세룡" };
		printf("%s %d\n", ss[0].name, ss[0].number);
		printf("학생의 이름은 ? ");
		gets(ss[1].name);
		printf("학생의 번호는 ? ");
		scanf_s("%d", &ss[1].number);
		ss[2].number = 10;
		strcpy(ss[2].name, "최호준");
		printf("%s %d\n", ss[1].name, ss[1].number);
		printf("%s %d\n", ss[2].name, ss[2].number);
	}

	int size;
	printf("학생 몇 명? ");
	scanf_s("%d", &size);
	// 2
	Student* sArr = malloc(sizeof(Student) * size);
	for (int i = 0; i < size; i++) {
		printf("학생번호와 이름 입력 : ");
		scanf_s("%d %s", &sArr[i].number, &sArr[i].name, 100);

		for (int j = 0; j < i; j++) {
			if (sArr[j].number == sArr[i].number) {
				i--;
				printf("다시 입력\n");
				break;
			}
		}
	}

	// 3
	for (int i = 0; i < size; i++) {
		printInfo(sArr[i]);
	}

	return 0;
}