#include <stdio.h>
struct Student
{
	int num;
	int score;
} typedef Student;

int main() {
	Student s1 = { 1, 50 };
	Student s2 = { .num = 2, 60 };
	Student s3;
	s3.num = 3;
	s3.score = 70;

	return 0;
}