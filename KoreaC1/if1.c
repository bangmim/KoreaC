#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main1() {
	int num = 11;

	//(����) ?	(���ΰ�� ������ �ڵ�) : (Ʋ���� ������ �ڵ�)
	(num > 10) ? printf("ū��") : printf("������");

	//���� �Է��� ���� Ȧ���� "Ȧ��", ¦���� ¦��, 1�̸� Ȧ��
	//10 % 2 ==0 //¦��
	//7%2==1	//Ȧ��

	(void)scanf("\n%d", &num);

	(num % 2 == 0) ? printf("¦��") : printf("Ȧ��");

}