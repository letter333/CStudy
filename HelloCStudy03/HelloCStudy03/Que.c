#include <stdio.h>

int main() {
    // 1��
    int x, y;
    printf("x, y��ǥ �Է� : ");
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
    
    // 2��
    int age;
    printf("���� : ");
    scanf_s("%d", &age);

    if (age < 20) {
        if (age < 0) {
            printf("Ÿ�뽺\n");
        }
        else {
            printf("�̼�����\n");
        }
    }
    else if (age >= 20 && age <= 50) {
        printf("��ȸ�� �� ������\n");
    }
    else if (age >= 51 && age <= 70) {
        printf("������\n");
    }
    else if (age >= 71) {
        if (age > 200) {
            printf("Ÿ�뽺\n");
        }
        else {
            printf("������ ������\n");
        }
    }

    // 3��
    int h, m;
    printf("�ð� �� �Է� : ");
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
