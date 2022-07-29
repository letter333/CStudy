#include <stdio.h>
#include "Mystructs.h"
int main() {
	KBStudent k1 = { 100, 90, "이동준" };
	KBStudent k2 = { .cScore = 100, .javaScore = 100, .name = "이유나" };
	KBStudent k3;
	k3.cScore = 100;
	k3.javaScore = 0;
	strcpy(k3.name, "김동준");
	KBStudent k4;
	scanf_s("%d %d", &k4.cScore, &k4.javaScore);
	rewind(stdin);
	gets(k4.name);
	printf("%d %d %s\n", k4.cScore, k4.javaScore, k4.name);

	KBStudent students[5];
	int cSum = 0;
	int javaSum = 0;
	int maxC = 0;
	int maxJava = 0;
	double avg_max = 0;
	int index_max_C = 0;
	int index_max_Java = 0;
	int index_max = 0;

	for (int i = 0; i < 5; i++) {
		rewind(stdin);
		printf("이름 ? ");
		gets(students[i].name);
		printf("C, Java점수 : ");
		scanf_s("%d %d", &students[i].cScore, &students[i].javaScore);
	}

	for (int i = 0; i < 5; i++) {
		cSum += students[i].cScore;
		javaSum += students[i].javaScore;
	}
	printf("c, java 각각의 총 합 : %d %d\n", cSum, javaSum);
	double cAvg = cSum / 5.0;
	double javaAvg = javaSum / 5.0;
	printf("c, java 각각의 평균 : %lf %lf\n", cSum / 5.0, javaSum / 5.0);

	maxC = students[0].cScore;
	maxJava = students[0].javaScore;
	avg_max = (students[0].cScore + students[0].javaScore) / 2.0;

	for (int i = 0; i < 5; i++) {
		if (maxC < students[i].cScore) {
			maxC = students[i].cScore;
			index_max_C = i;
		}
		if (maxJava < students[i].javaScore) {
			maxJava = students[i].javaScore;
			index_max_Java = i;
		}
		if (avg_max < (students[i].cScore + students[i].javaScore) / 2.0) {
			avg_max = (students[i].cScore + students[i].javaScore) / 2.0;
			index_max = i;
		}
	}

	printf("C 1등 : %s\n", students[index_max_C].name);
	printf("Java 1등 : %s\n", students[index_max_Java].name);
	printf("평균 1등 : %s\n", students[index_max].name);

	return 0;
}