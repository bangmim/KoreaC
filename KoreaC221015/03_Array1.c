#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//�迭 : ������ ��Ƴ��� ��
	//char arr1[100];				//char ���� 100���� ��Ƴ��� �� 

	//Array ����ϴ� ����?
	//1.������ ������ ����� ���ŷο���
	//2.�ϳ��� ���������� �������� ���� ���� �����ϱ� ���ؼ�(ex.ī��޴� ������ 100�� -> ������ 1��)

	//3���̵�, 10000���̵� �ϳ��� �ڵ�� ���� �����ϴ�.
	int num[3] = { 1,10,100 };
	for (int i = 0; i < sizeof(num) / sizeof(int); i++) {
		printf("%d\n", num[i]);
	}

	/*char str1[100] = { 'h','i','\0' };
	char str2[100] = 'h!';
	int num1[100] = { 0,1,2,3,4,5,56 };
	float fNum1[100] = { 0.0f,1.0f, };*/

	//p.150 ����
	/*int numbers[3] = { 1,2,3 };
	char characters[] = { 'a','b','c','d','e' };

	numbers[0]=0;
	numbers[1] = 10;
	numbers[2] = 33;

	printf("%d\n", numbers[0]);
	printf("%d\n", numbers[1]);
	printf("%d\n", numbers[2]);*/

	//p.152,154,156,157
	//int i;
	//int odd[3];				//�ʱ�ȭ���� ���� �迭
	//int even[5] = { 2,4,6,8,10 };

	////�迭�� ���� ��� �ʱ�ȭ
	//odd[0] = 1;
	//odd[1] = 3;
	//odd[2] = 5;

	////���� ��� ���� �� ���
	//printf("%d %d %d \n", odd[0], odd[1], odd[2]);

	////for���� ���� �迭 ��� ���
	//for (i = 0; i < 5; i++) {
	//	printf("%d ", even[i]);
	//}
	//printf("\n");

	//char greet[] = "Hello,Guys!";
	//printf("1���� �迭  greet�� ���̴� : %d\n", sizeof(greet));

	//char mind[30] = "I Love programming";
	//printf("%s\n", mind);

	//mind[7] = '\0';			//8��° ��ҷ� �� ���� ����
	//printf("%s\n", mind);	//�� ���ķ� ��µ��� �ʴ´�. (�� ���ڴ� ���ڿ��� ���� �ǹ��ϴ� ����. ���ڿ� �߰��� �� ���ڸ� ������ ���ڿ��� ���� �����ϴ� ���� �����ϴ�)

	//mind[1] = '\0';
	//printf("%s\n", mind);

	//char str[50];
	//printf("���ڿ��� �Է��ϼ���: ");
	//scanf("%s",str);		//&�����ڸ� ������� �ʴ´�.

	//printf("�Էµ� ���ڿ� : %s\n", str);

	//p.158 (1),(3)
	//(1)���̰� 5�� int�� �迭 ����. �ʱ�ȭ ����Ʈ ����Ͽ� �ʱ�ȭ. 
	int arr[5]={1,2,3,4,5};
	int total = 0;
	float avg = 0.0f;
	//����
	//printf("�迭�� ��� ����� ���� : %d\n", arr[0] + arr[1] + arr[2] + arr[3] + arr[4]);
	//����� : for �ݺ����� ����
	
	for (int i = 0; i < 5; i++) {
		total += arr[i];
	}
	printf("�迭�� ��� ����� ���� : %d\n", total);

	avg = (float)total / (sizeof(arr) / sizeof(int));								//sizeof(arr)/sizeof(int) : array index�� ������ �� �� �ִ�.

	//�迭�� ��� ����� ���(�Ǽ������� ���)
	//int avg = (arr[0] + arr[1] + arr[2] + arr[3] + arr[4]) / 5;
	printf("�迭�� ��� ����� ��� : %f\n", avg);

	//(2)�ܾ �Է¹޾� �������� ����ϴ� ���α׷�
#define ARR_SIZE 1000						//array size ����
	char eng[ARR_SIZE] = {0,};				//0~999			//�ʱ�ȭ �� ������ ���� �Է��س��ƾ� �Ѵ�.
	char oper[ARR_SIZE]={0,};
	printf("���ܾ� �Է�: \n");
	scanf("%s", eng);

	for (int i = ARR_SIZE; i > 0; i--) {
		if (eng[i - 1] == 0) {
			continue;					//null���̸� ���

			oper[ARR_SIZE - i] = eng[i - 1];
			printf("%c", oper[ARR_SIZE - 1]);
		}
	}

	//(3)����ڷκ��� ���� �ܾ� �ϳ��� �Է� �޾� char�� �迭�� ����.
#define ENGLI_SIZE 100
	char engli[ENGLI_SIZE];
	char bk = 0;
	printf("����ܾ� �Է�: \n");
	scanf("%s", engli);
	bk = engli[0];

	for (int i = 0; i < ENGLI_SIZE; i++) {
		if (i == ENGLI_SIZE - 1) {
			break;
		}
		if (engli[i] >= engli[i + 1]) {
			engli[i + 1] = engli[i];
		}
		else {
			bk = engli[i + 1];
		}
	}

	printf("�ƽ�Ű�ڵ尡 ���� ū ���� : %c\n", bk);

	return 0;

	}