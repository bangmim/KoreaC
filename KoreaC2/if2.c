#include <stdio.h>

void main2()
{
	int num = 3;

	//���ǹ� if(){}
	//�Ұ�ȣ �ȿ� ������ ������ {} �����ϰ�
	//�Ұ�ȣ �ȿ� ������ Ʋ���� {} �����Ѵ�.
	//()�ȿ� ������ ����, {}�ȿ� ������ ������ ������ �ڵ带 ���´�.

	if (num%2==0) {
		printf("¦��\n");
	}

	if (num % 2 == 1) {
		printf("Ȧ��\n");
	}

	//���� 105

	num = 9;
	if (num < 3) {
		printf("num is smaller than 3!\n");
	}
	if (num == 3) {
		printf("num is 3!");
	}
	if (num > 3) {
		printf("num is bigger than 3!\n");
	}

	if (num < 3) {
		printf("3���� �۴�!\n");
	}
	else {
		printf("if ������ Ʋ����, 3���� ũ�ų� ����\n");
	}

	// age ������ ����� ������ ���̸� �� ���� 20 �̻��̸� ����, 20 �̸��� �̼�����

	int age = 50;
	if (age >= 20) {
		printf("����\n");
	}
	else {
		printf("�̼�����\n");
	}

	//10���� ������ ���
	//10~19 >10��
	//20~29>20��
	//30~39>30��
	//��Ÿ

	age = 22;
	if (age < 10) {
		printf("���\n");
	}
	else if (age < 30) {
		printf("20��\n");
	}
	else if (age < 20) {
		printf("10��\n");
	}
	else if (age < 40) {
		printf("30��\n");
	}
	else {
		printf("��Ÿ");
	}

}