#define _CRT_SECURE_NO_WARNING				//_s ���� ���� ����
//#define ������ ����
#include <stdio.h>
#define THREE	 3								//THREE�� ���� 3�̶�� �ν��ϰԲ� ������ ����. (��ó����)

int main3() {
	//p.140,141 ����
	//int num;
	//while (1) {
	//	printf("-1 �Է½� ����: ");
	//	scanf("%d", &num);
	//	if (num == -1) {
	//		break;
	//	}
	//}

	//for (num = 1; num <= 5; num++) {
	//	if (num == 3) {
	//		continue;
	//	}
	//	printf("%d\n", num);
	//}
	//char ascll1 = '\0';			//NULL���� (����ִ�)
	//if (ascll1 == 0) {
	//	printf("null is %d\n",ascll1);
	//}
	//char ascll2 = 'a';
	//printf("����a�� %d�� �����ϴ�\n",ascll2);			//97
	//char ascll3 = 'A';	
	//printf("����A�� %d�� �����ϴ�\n", ascll3);			//65

	//if (ascll3 < 97) {
	//	printf("�빮��\n");
	//}

	//p.143 (3) 
	//���ѹݺ� -> �Է�, �ҹ��ڸ� ���, �빮�ڸ� ����

	/*char a;
	while (1) {

	printf("�Է��ϼ���(�빮�� �Է½� ����): \n");
	scanf("%c", &a);

	if (a >= 97 && a <= 122) {
		printf("%c�� �Է��߽��ϴ�.\n",a);
	}
	else if (a >= 65 && a <= 90) {
	printf("%c�� �Է��߽��ϴ�. �����մϴ�\n", a);
	break;
	}

	rewind(stdin);

	}*/

	//(4)
	// //����ڷκ��� �ǿ����ڿ� �����ڸ� �Է¹޾� ���� ����� ����ϴ� ���α׷��� �ۼ��غ�����
	//�Է� �� ) �ǿ�����1 : 5
	//������:+
	//�ǿ�����2:3
	//���� ��) 5+3=8

	char b;
	char ������;
	char b1;
	while (1) {
	printf("�ǿ�����1 : \n");
	scanf("%d", &b);
	
	printf("������ : \n");
	rewind(stdin);							//��µ��� �ʴ� �ڵ� ���� ����.
	scanf("%c", &������);

	printf("�ǿ�����2: \n");
	scanf("%d", &b1);
	
	if (������ == 43) {
		printf("%d + %d = %d\n",b,b1,b+b1);
	}
	else if (������ == 45) {
		printf("%d - %d = %d\n", b, b1, b - b1);
	}
	else if (������ == 42) {
		printf("%d * %d = %d\n", b, b1, b * b1);
	}
	else if (������ == 47) {
		printf("%d / %d = %d\n", b, b1, b / b1);
	}
	}





	return 0;
}