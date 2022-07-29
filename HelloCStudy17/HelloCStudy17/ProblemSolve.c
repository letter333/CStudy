#include <stdio.h>
struct KBStudent {
	int cScore;
	int javaScore;
	char name[100];
} typedef KBStudent;


int main() {
	KBStudent s1 = { 50, 80, "가나다" };
	KBStudent s2;
	printf("학생2 c점수 : ");
	scanf_s("%d", &s2.cScore);
	printf("학생2 java점수 : ");
	scanf_s("%d", &s2.javaScore);
	rewind(stdin);
	printf("학생2 이름 : ");
	gets(s2.name);

	printf("c점수 : %d, java점수 : %d, 이름 : %s\n", s1.cScore, s1.javaScore, s1.name);
	printf("c점수 : %d, java점수 : %d, 이름 : %s\n", s2.cScore, s2.javaScore, s2.name);

	KBStudent students[5];
	for (int i = 0; i < 5; i++) {
		printf("학생배열%d의 c, java점수 : ", i);
		scanf_s("%d %d", &students[i].cScore, &students[i].javaScore);
		printf("학생배열%d의 이름 : ", i);
		rewind(stdin);
		gets(students[i].name);
	}

	int cSum = 0;
	int javaSum = 0;
	for (int i = 0; i < 5; i++) {
		cSum += students[i].cScore;
		javaSum += students[i].javaScore;
	}
	printf("c점수 총합 : %d\n", cSum);
	printf("java점수 총합 : %d\n", javaSum);

	double cAvg = cSum / 5.0;
	double javaAvg = javaSum / 5.0;

	printf("c점수 평균 : %lf\n", cAvg);
	printf("java점수 평균 : %lf\n", javaAvg);

	int cMax = 0;
	int cMin = students[0].cScore;
	int cMaxIdx = 0;
	int cMinIdx = 0;
	for (int i = 0; i < 5; i++) {
		if (cMax < students[i].cScore) {
			cMax = students[i].cScore;
			cMaxIdx = i;
		}
		if (cMin > students[i].cScore) {
			cMin = students[i].cScore;
			cMinIdx = i;
		}
	}
	printf("c언어 1등 : %s\n", students[cMaxIdx].name);
	printf("c언어 꼴등 : %s\n", students[cMinIdx].name);

	int javaMax = 0;
	int javaMin = students[0].javaScore;
	int javaMaxIdx = 0;
	int javaMinIdx = 0;
	for (int i = 0; i < 5; i++) {
		if (javaMax < students[i].javaScore) {
			javaMax = students[i].javaScore;
			javaMaxIdx = i;
		}
		if (javaMin > students[i].javaScore) {
			javaMin = students[i].javaScore;
			javaMinIdx = i;
		}
	}
	printf("java언어 1등 : %s\n", students[javaMaxIdx].name);
	printf("java언어 꼴등 : %s\n", students[javaMinIdx].name);

	int totalAvg[5] = { 0 };
	for (int i = 0; i < 5; i++) {
		totalAvg[i] = (students[i].cScore + students[i].javaScore) / 2.0;
	}
	int totalMax = 0;
	int maxIdx = 0;
	int totalMin = totalAvg[0];
	int minIdx = 0;

	for (int i = 0; i < 5; i++) {
		if (totalMax < totalAvg[i]) {
			totalMax = totalAvg[i];
			maxIdx = i;
		}
		if (totalMin > totalAvg[i]) {
			totalMin = totalAvg[i];
			minIdx = i;
		}
	}

	printf("전체 평균 1등 : %s\n", students[maxIdx].name);
	printf("전체 평균 꼴등 : %s\n", students[minIdx].name);

	printf("-----------함수 사용-----------\n\n");

}