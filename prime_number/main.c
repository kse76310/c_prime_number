#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int column = 0;
	int inputValue;							//�Է¹��� ��
	int stepValue;							//�ܰ躰 ������ ��
	int incValue;							//�����ӳѹ� Ȯ���ϱ� ���� ��
	//2�̻��� �������Է¹޴´�.
	printf("2�̻��� ������ �Է��ϼ���:");
	scanf("%d", &inputValue);
	//2���� 1�� �����ϸ鼭 �Է� ���� ������ ���� �� �����ϴ� ����
	for (stepValue = 2; stepValue <= inputValue; stepValue++) {
		//������ ���� 1�� ������ �ڽ��� ������ 1�� �����ϸ鼭 ������� �������� 0�̸�
		for (incValue = 2; incValue < stepValue; incValue++) {
			if (stepValue % incValue == 0) {
				break;
			}
		}
		//�������� �������� 0���� �������� ���� ���� pn���� �����Ͽ� ȭ�鿡 ǥ���Ѵ�
		if (incValue == stepValue) {
			printf("%5d", stepValue);
			column++;
			//5���� �Ѿ�� �ٹٲ��� �Ѵ�.
			if (column == 5) {
				column = 0;
				printf("\n");
			}

		}
	}
}