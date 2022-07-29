#include <stdio.h>
struct KBStudent {
	int cScore;
	int javaScore;
	char name[100];
} typedef KBStudent;


int main() {
	KBStudent s1 = { 50, 80, "������" };
	KBStudent s2;
	printf("�л�2 c���� : ");
	scanf_s("%d", &s2.cScore);
	printf("�л�2 java���� : ");
	scanf_s("%d", &s2.javaScore);
	rewind(stdin);
	printf("�л�2 �̸� : ");
	gets(s2.name);

	printf("c���� : %d, java���� : %d, �̸� : %s\n", s1.cScore, s1.javaScore, s1.name);
	printf("c���� : %d, java���� : %d, �̸� : %s\n", s2.cScore, s2.javaScore, s2.name);

	KBStudent students[5];
	for (int i = 0; i < 5; i++) {
		printf("�л��迭%d�� c, java���� : ", i);
		scanf_s("%d %d", &students[i].cScore, &students[i].javaScore);
		printf("�л��迭%d�� �̸� : ", i);
		rewind(stdin);
		gets(students[i].name);
	}

	int cSum = 0;
	int javaSum = 0;
	for (int i = 0; i < 5; i++) {
		cSum += students[i].cScore;
		javaSum += students[i].javaScore;
	}
	printf("c���� ���� : %d\n", cSum);
	printf("java���� ���� : %d\n", javaSum);

	double cAvg = cSum / 5.0;
	double javaAvg = javaSum / 5.0;

	printf("c���� ��� : %lf\n", cAvg);
	printf("java���� ��� : %lf\n", javaAvg);

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
	printf("c��� 1�� : %s\n", students[cMaxIdx].name);
	printf("c��� �õ� : %s\n", students[cMinIdx].name);

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
	printf("java��� 1�� : %s\n", students[javaMaxIdx].name);
	printf("java��� �õ� : %s\n", students[javaMinIdx].name);

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

	printf("��ü ��� 1�� : %s\n", students[maxIdx].name);
	printf("��ü ��� �õ� : %s\n", students[minIdx].name);

	printf("-----------�Լ� ���-----------\n\n");

}