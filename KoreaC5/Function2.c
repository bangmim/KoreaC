#include <stdio.h>

int getBigger(int n1, int n2) {
	if (n1 > n2) {
		return n1;
	}
	else if (n1 < n2) {
		return n2;
	}
	else {
		return 0;
	}
}

int main3() {
	//p.223 ����

	int result;

	result = add(3, 5);				//�Լ� ȣ��(���)
	printf("�Լ��� ��ȯ�� ��:%d\n", result);

	//p.228

	result = getBigger(3, 5);
	printf("ù��° ���:%d\n", result);

	result = getBigger(8, 2);
	printf("�ι�° ���:%d\n", result);

	result = getBigger(4,4);
	printf("�ι�° ���:%d\n", result);

	//p.231

	return 0;
}


int add(int a, int b) {			//�Լ� ���� {} : �����ϴ� ��			//������ �������� ���� �� �ִ�.
	return a + b;
}
