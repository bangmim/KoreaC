#include <stdio.h>

void main() {
	int number1 = 3 + 4 + 5;
	int number2 = 3 + 4 * 5;
	int number3 = (3 + 4) * 5;
	float number4 = number3 / 3.f;
	printf("%.1f\n\n", number4);	//.f : �Ҽ��� 1��° �ڸ����� �ݿø�, .1f: �Ҽ��� 2��° �ڸ����� �ݿø�

	//p.86 (3��)
	/*
	int kor = 86;
	int eng = 75;
	int mat = 88;
	int his = 60;
	int sci = 97;
	*/

	/*����� ���*/
	int kor=86, eng=75, mat=88, his=60, sci =97;
	int sum = kor + eng + mat + his + sci;
	float avg = sum / (float)5;

	//float avg = (kor + eng + mat + his + sci) / 5.f;	//81.1999
	printf("¯���� ����� %.1f �Դϴ�\n\n", avg);

	//����2
	float num1 = 136.4f;	//6
	float num2 = 37.11f;	//7
	
	//���� �ڸ� ���� ������ �����ؼ� ���

	int a = (int)num1 % 10;
	printf("%d\n", a);
	int b = (int)num2 % 10;
	printf("%d\n", b);

	//����3
	//�ʿ��� �ٱ����� ����
	//�ٱ��� �Ѱ��� ������ 10�� ���ϴ�.
	//�ٱ��ϰ� �� �� �ʿ����� ����ϴ� �ڵ带 ������ּ���

	int ������1 = 33;
	int ������2 = 17;

	int �ٱ���1 = (������1 / 10) + 1;
	int �ٱ���2 = (������2 / 10) + 1;

	printf("�ʿ��� �ٱ����� ������ %d �Դϴ�", �ٱ���1);
	printf("�ʿ��� �ٱ����� ������ %d �Դϴ�", �ٱ���2);
}