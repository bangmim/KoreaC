#include <stdio.h>

int main32() {

	//���ǹ� : if, switch () 
	//�ݺ��� : while, for

	
	/* <����>
	
	while(����){
	(������ ���̸� �ݺ��� ����);
	(������ ���� ������ ����-->�ش� ���Ǳ��� �ݺ��Ѵ�);
	}
	*/

	int num2 = 9;
	int Ƚ�� = 0;
	
	while (Ƚ�� < 10) {
		if (num2 < 10) {
			printf("10���� �۴�\n");
		}
		Ƚ��++;
	}

	//p.127,128,130 ����

	//p.127
	int num1 = 0;
	while (num1 < 10) {
		printf("num is %d now\n",num1);
		num1++;
	}

	//p.128
	/*int num = 0;
	while (num != -1) {
		printf("���ڸ� �Է��ϼ��� (-1�Է½� ����):");
		scanf("%d", &num);
		if (num == -1) {
			printf("�����մϴ�");
		}
		else {
			printf("%d�� �Է��ϼ̳׿�\n", num);
		}
	}*/

	//p.130 (���ѷ���)
	/*int num3;
	while (1) {
		printf("���� �ݺ���... ���ڸ� �Է��ϼ���: ");
		scanf("%d", &num3);
		printf("%d�� �Է��ϼ̳׿�\n", num3);
	}

	return 0;*/

	//p.143 (1)
	//1���� n������ ���� ���Ͽ� ����ϴ� ���α׷� (while)
	
	int num5;
	int i=1;
	int sum=0;

	printf("������ �Է��ϼ��� :");
	scanf("%d", &num5);

	while (i<=num5) {
		sum += i ;
		i++;
	}

	printf("1���� %d������ ���� %d �Դϴ�.", num5, sum);


	//do~while�� while�� ����
	//do~while: ������ Ʋ���� ������ 1���� ����
	//while�� ������ Ʋ���� ���� ����.

	//Ʋ������
	//while (0 > 3) {
	//	printf("while ���� �ȵ�\n");
	//}

	////do~while
	//do {
	//	printf("do~while ���� �ȵ�\n");
	//} while (0 > 3);



	return 0;

}