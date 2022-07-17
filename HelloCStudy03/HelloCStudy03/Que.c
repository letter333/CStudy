#include <stdio.h>

int main() {
    // 1번
    int x, y;
    printf("x, y좌표 입력 : ");
    scanf_s("%d %d", &x, &y);

    if (x > 0) {
        if (y > 0) {
            printf("1\n");
        }
        else {
            printf("4\n");
        }
    }
    else if( x < 0) {
        if (y > 0) {
            printf("2\n");
        }
        else {
            printf("3\n");
        }
    }
    else {
        printf("0\n");
    }
    
    // 2번
    int age;
    printf("나이 : ");
    scanf_s("%d", &age);

    if (age < 20) {
        if (age < 0) {
            printf("타노스\n");
        }
        else {
            printf("미성년자\n");
        }
    }
    else if (age >= 20 && age <= 50) {
        printf("사회의 주 구성원\n");
    }
    else if (age >= 51 && age <= 70) {
        printf("관리자\n");
    }
    else if (age >= 71) {
        if (age > 200) {
            printf("타노스\n");
        }
        else {
            printf("지혜의 도서관\n");
        }
    }

    // 3번
    int h, m;
    printf("시간 분 입력 : ");
    scanf_s("%d %d", &h, &m);

    h %= 24;
    m %= 60;

    if (m - 45 == 0) {
        printf("%d %d\n", h, m - 45);
    }
    else if (m - 45 < 0) {
        if (h == 0) {
            printf("%d %d", h + 23, m + 15);
        }
        else {
            printf("%d %d", h - 1, m + 15);
        }
    }
    else {
        printf("%d %d", h, m - 45);
    }

    return 0;
}
