#include <stdio.h>

void main10(){
	//type : �ڷ���
	//�ڷ��� : char, int, float, ...

	//�ڷ����� ����ϴ� ����?
	//1.�������� �Ǽ��� �����Ϸ�(Visual Studio)�� �����ϱ� ����
	//2.�������� �ǵ��� ��Ȯȭ

	//��������?
	//�������� ���� ������ ����

	/*
	char name[] : "" ���ڿ�
	char name : '' ����(1ĭ)	//1ĭ = 126
	int name : ����(4ĭ)
	float name : �Ǽ�(4ĭ)
	*/
	
	//�ڷ����� ���� ĭ  ���� �ٸ���
	char phone[] = "010-1222-2222";	//���ڿ� -1ĭ *���� ���� ���� ���� +1
	char aa = 'A';					//���� -1ĭ

	short num3 = 12u;				//2ĭ ����(����)
	int num = 123;					//4ĭ ����(����)
	long num33 = 12l;				//8ĭ ����(����)

	float num2 = 3.14f;				//4ĭ �Ǽ�
	double num22 = 3.14f;			//8ĭ �Ǽ�
	/*
	printf("%d\n", num);
	printf("%d\n", (int)sizeof(phone));
	printf("%d\n", (int)sizeof(num));
	printf("%d\n", (int)sizeof(num2));
	printf("%c\n", (int)sizeof(aa));	//(int)sizeof : int�� �ڷ��� ��ȯ

	//p.45(2)
	printf("%d\n", (int)sizeof(int));
	printf("%d\n", (int)sizeof(char));
	printf("%d\n", (int)sizeof(short));
	printf("%d\n", (int)sizeof(50));
	printf("%d\n", (int)sizeof(float));
	printf("%d\n", (int)sizeof(3.14f));	//4ĭ : �Ҽ��� �ִ� ����.f ->float
	printf("%d\n", (int)sizeof(3.14));	//8ĭ : �Ҽ��� �ִ� ���� -> double
	
	//float f = 3.14;	//���߻� : double ���� float���� �߸��ϴ�.
	float f = 3.14f;
	int number = 3;

	//�ڷ��� ��ȯ : ������ ���¸� �ٲ�
	//���� > �Ǽ�
	//���� > ����
	//�Ǽ� > ����

	//�ڷ����� �ٲٴ� ��� : ���� �տ� �Ұ�ȣ �ȿ� ���ϴ� �ڷ����� ���´�.> (�ڷ���)����
	printf("%d\n", (int)f);
	printf("%f\n", (float)number);
	*/

}