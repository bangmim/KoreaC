#define _CRT_SECURE_NO_WARNINGS
#include	<stdio.h>

void main0() {
	//int num = 0;
	//float fnum = 0.0f;
	//char c = '\0';
	//
	//printf("���ڸ� �Է��ϼ���>>");				//���
	//scanf("%d", &num);							//�Է�
	//printf("�Ǽ��� �Է��ϼ���>>");
	//scanf("%f", &fnum);
	//printf("���ڸ� �Է��ϼ���>>");
	//rewind(stdin);							//�̸� ���ڰ� �����ִ��� Ȯ���ϰ� ������ �����ϴ� ����
	//scanf("%c", &c);
	//printf("�Է��� ���ڴ� %d, �Ǽ��� %f, ���ڴ� %c \n ",num,fnum,c);
	

	//#define�̶� ? ������ ����
	//#define MY_NUMBER	123;
	//MY_NUMBER��� ������ 123�� ���� ��ó�� ������
	//printf("%d\n",MY_NUMBER);

	char my_str[100];
	(void)scanf("%s", my_str);
	printf("���� �Է��� ����%s", my_str);

	// scanf ���ǻ���
	//���ڿ��� &���� ����
	//scanf("%s", &my_str); -> X
	//scanf("%s", my_str);	-> O

	//����(%c)�� �Է� �ޱ� ���� �������Ѵ�. (���� �߻� ����)
	//rewind(stdin) �Է� ��
	//scanf("%c", &c);

}