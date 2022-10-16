#include <stdio.h>

//p.234 ��������

int number = 0;		//�������� number;

void __printNumber(void) {
	printf("�������� number�� %d�� �����ϰ� �ִ�!\n", number);

	//�Լ��� return�� ���� �� �Լ��� �ڷ����� void
	// return; ����
}

void __staticNumber() {
	//static ����(�����Ϳ���)
	static int s_number = 4;		//static ����(�������� �����ǳ� ���α׷��� ����� �� �����ȴ�.)
	s_number++;
	printf("%d\n", s_number);
}

//p.235
void increaseNumber() {
	static int number = 0;			//static �������� number ����
	number++;
	printf("number : %d\n", number);

}

int main5(void) {		
	int number = 3;		//��������		//���� ���������� �̸��� ������ ���������� �켱���� ����Ѵ�.
	printf("�������� number�� %d�� �����ϰ��ִ�!\n", number);
	__printNumber();
	
	__staticNumber();
	__staticNumber();
	__staticNumber();

	increaseNumber();
	increaseNumber();
	increaseNumber();
	increaseNumber();
	increaseNumber();

	return 0;
}