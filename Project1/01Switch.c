#include <stdio.h>

void main35() {
	//���ǹ� if, switch

	//�� 
	//if(){}
	//else if(){}
	//else{}

	//switch(){} : ���� ���� ���Ҷ� ���� (���� X, ���� ��O / ������ ���� case���� ��)
	
	/* <����>
	
	swtich(ǥ����){			//���ǿ� ���� ǥ������ ���� ������ ��ȯ�Ǿ�� �Ѵ�. ��ȯ�Ǵ� ���ڸ� case ���� ���ڷ� ����.
	case :
		printf();
		break;
	...

	default:
		printf();
		break;					//���� ����
	}
	*/

	int num1 = 3;
	switch (num1) {
	case 0:
		printf("0�� ���� �� ����\n");
		break;												//case���� break; ������Ѵ�. (���� ������ break���� �ִ� case���� ��� ����ȴ�.)
	case 1:
		printf("1�� ���� �� ����\n");
		break;
	case 2:
		printf("2�� ���� �� ����\n");
		break;
	case 3:
		printf("3�� ���� �� ����\n");
		break;
	default:														
		printf("�ϳ��� �´� �� ���� �� ����\n");

	}

	//p.118
	/*int num;
	printf("input some positive number : ");
	(void)scanf("%d", &num);

	switch (num) {
	case 1:
		printf("num is 1\n");
		break;
	case 2:
		printf("num is 2\n");
		break;
	case 3:
		printf("num is 3\n");
		break;
	default:
		printf("maybe bigger than 3\n");
	}

	printf("Switch state end.\n");*/

	//p.121
	/*int num2;
	printf("input some positive number: ");
	(void)scanf("%d", &num2);

	switch (num2) {
	case 1:
	case 3:
	case 5:
		printf("odd\n");
		break;
	case 2:
	case 4:
	case 6:
		printf("even\n");
			break;
	default:
		printf("maybe bigger than 6\n");
	}
	printf("switch state end.\n");*/

	//p.123 (4)

	/*int kor = 88;
	int eng = 90;
	int mat = 58;
	int his = 81;
	int sci = 72;

	float avg = (kor + eng + mat + his + sci) / 5;
	char grade;*/

	int kor, eng, mat, his, sci, total;
	float avg;

	kor = 88, eng = 90, mat = 58, his = 81, sci = 72;
	total = kor + eng + mat + his + sci;
	avg = total / 5.f;
	
	char grade;

	//
	switch ((int)avg/10) {							//case ������ int�� �ۼ��ǹǷ�, float -> int�� ��ȯ. avg �տ� (int)�� �����ش�.
	case 9:
		grade = 'A';
		break;
	case 8:
		grade = 'B';
		break;
	case 7:
		grade = 'C';
		break;
	case 6:
		grade = 'D';
		break;
	default:
		grade = 'F';
	}
	printf("¯���� ����� %.2f�̰�, ������ %c�̴�.", avg, grade);			//����� switch ���� �ۿ���


	//if�� Ǯ��

		/*if ((int)avg >= 90) {
			grade = 'A';
		}
		else if ((int)avg >= 80) {
			grade = 'B';
		}
		else if ((int)avg >= 70) {
			grade = 'C';
		}
		else if ((int)avg >= 60) {
			grade = 'D';
		}
		else {
			grade = 'F';
		}

		printf("¯���� ����� %.2f�̰�, ������ %c�̴�.", avg, grade);*/


	







}