#include <stdio.h>

//�Լ� : �ڵ带 �����ϴ� ��. (���� ����� ���� �ڵ带 �������� ������ �� �ְ� ����Ѵ�.)
//����
//1.����
//2.����� ���� ������(���)

//���밪���ϱ� ��� �̸����� �ڵ带 ����Ѵ�.
//���� ���޹ް� ���� �Ŀ� ����� �˷��ش�.
//():���� ���޹޴� �Ű�������(�ӽ� ����)
//return : ���� ���� ���� ����� ���� ���� (��� �˷��ֱ�)
//�Լ� ���ʿ� �ڷ����� �Լ��� �ڷ���, return�� �ڷ����� ��ġ�ؾ� �Ѵ�.
int ���밪���ϱ�(int n1, int n2) {
	//���밪���� ���ϱ�
	int result = 0;

	if (n1 < 0) {
		n1 = -n1;
	}
	if (n2 < 0) {
		n2 = -n2;
	}

	result=n1 + n2;

	return result;			//������� ����ϴ� ���� �����Ѵ�.
}

int ������(int value, int n) {		//value�� n��
	int result = 0;
	switch (n) {
	case(0):
		result = 1;
		break;
	case(1):
		result = value;
		break;
	case(2):
		result = value * value;
		break;
	case(3):
		result = value * value * value;
		break;
	}

	return result;
}

int main12() {

	int num1 = 3;
	int num2 = -4;
	int result = 0;


	result = ���밪���ϱ�(num1, num2);			//�������� �Լ� (); : �߰�ȣ ���� ����.		//ctrl+�Լ� �̸� Ŭ�� : ���� ���� �Լ��� �̵��Ѵ�.

	printf("���밪 ���ϱ��� ����� %d\n", result);

	//���� �ϱ�
	int result1 = ������(num1, 2);				
	printf("���� ����� %d\n", result1);		//9

	//������ �ϱ�
	int result2 = ������(num1,3);			//27
	printf("������ ����� %d\n", result2);

	//������ �Ͱ� �������� ���� ���� ���ϱ�
	if (result1 < 0) {
		result1 = -result1;
	}
	if (result2 < 0) {
		result2 = -result2;
	}

	result = ���밪���ϱ�(result1,result2);
	printf("���밪 ���ϱ��� ����� %d\n", result);




	return 0;
}