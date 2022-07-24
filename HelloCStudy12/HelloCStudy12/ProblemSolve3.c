#include <stdio.h>
#include "Student.h"
struct MyStruct
{
	int width;
	int height;
} typedef Rectangle;

int main() {
	// 1~2
	Rectangle recs[5];
	for (int i = 0; i < 5; i++) {
		printf("%d번사각형의 width와 height : ", i + 1);
		scanf_s("%d %d", &recs[i].width, &recs[i].height);
		if (recs[i].width < 0 || recs[i].height < 0) {
			i--;
			continue;
		}
	}

	Rectangle max = recs[0];
	for (int i = 0; i < 5; i++) {
		int maxArea = max.width * max.height;
		int recsArea = recs[i].width * recs[i].height;
		if (maxArea < recsArea) {
			max = recs[i];
		}
	}
	
	printf("넓이가 가장 넓은 사각형의 width : %d, height : %d\n", max.width, max.height);

	// 3~5
	Stu students[5];
	for (int i = 0; i < 5; i++) {
		printf("학생%d의 math eng kor 입력 : ", i + 1);
		scanf_s("%d %d %d", &students[i].math, &students[i].eng, &students[i].kor);
	}

	Stu high = students[0];
	int idx = 0;
	for (int i = 0; i < 5; i++) {
		double topAvg = (high.math + high.eng + high.kor) / 3;
		double avg = (students[i].math + students[i].eng + students[i].kor) / 3;
		if (topAvg < avg) {
			topAvg = avg;
			idx = i;
		}
	}

	printf("평균 점수가 가장 높은 학생 : %d번째 학생\n", idx + 1);

	return 0;
}