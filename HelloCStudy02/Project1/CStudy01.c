#include <stdio.h>
int main() {
    int age = 25;
    long bigValue = 9999999999;
    short smallValue = 5;
    double pi_value = 3.1415;
    float myPi = 3.14;
    char MyInitial = 'O';

    int nowYear = 2022;
    printf("���� �¾ ������%d�Դϴ�.\n", nowYear + 1 - age);
    printf("������ ���� %f�Դϴ�.\n", pi_value);

    int input;
    printf("���ڸ� �Է����ּ���.\n");
    scanf_s("%d", &input);
    printf("�� ������ ������ %d �Դϴ�.\n", input * input);

    int result = input * input;
    printf("�� : %d\n", result);

    return 0;
}