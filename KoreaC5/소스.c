#include <stdio.h>

//�Է°��� ��ȯ���� ��� ���� �Լ�
void guide(void) {
	printf("inputNumber �Լ��� ���� ������ �Է��� �� �ֽ��ϴ�.\n");
	printf("���� printNumber �Լ��� ���� �Է��� ������ ����� ���� �ֽ��ϴ�\n");
}

//�Է°��� �����ϴ� �Լ�
void printNumber(int num) {
		printf("����� �Է��� ������ %d �Դϴ�",num);
	}

//��ȯ���� �����ϴ� �Լ�
int inputNumber(void) {
	int num;
	printf("������ �Է����ּ���: ");
	scanf("%d", &num);

	return num;
}

int main4(void) {
	guide();
	int num = inputNumber();		//��ȯ���� ������ �� �ִ�
	printNumber(num);
	num = inputNumber();
	printNumber(num);
}