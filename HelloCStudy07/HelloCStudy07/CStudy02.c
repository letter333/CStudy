#include <stdio.h>
int main() {
	// ���
	int number;
	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &number);
	// number ������ �ּ�(��ġ)�� ����
	// �׸��� �� �ȿ� �� ���� �������
	
	printf("number=%d\n", number);
	if (number > 0) {
		printf("number�� ���\n");
	}
	else if (number == 0) {
		printf("number�� 0\n");
	}
	else  {
		printf("number�� ����\n");
	}


	return 0;
}