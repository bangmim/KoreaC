#include <stdio.h>

int main44() {
	//�ݺ���: while, for

	int flag = 0;		// ������(��������)
	while (flag < 3) {
		printf("%d��", flag);
		printf("\n");

		flag++;			//������ ����(���ѹݺ� ���ϱ� ����)
	}

	//while : ������ ���� ����, ������ ����������� �Ѵ�.
	//for : ������ ���õ� ���� �� ���� ���� �� �ִ�.

	for (int plat = 0; plat < 3; plat++) {
		printf("%d��", plat);
		printf("\n");
	}

	/*
	for(�ʱⰪ; ���ǽ�; ������;){
		�ݺ��� ����;
	}
	�ʱⰪ : ������ ���� �� �ʱ�ȭ
	*/

	//p.135
	//int i;
	for (int i = 0; i < 3; i += 1) {
		if (i < 2) {
			printf("===");
		}

		printf("i is %d now\n", i);
	}

	//for�� 1~10 ���
	//¦���� ���

	for (int i = 1; i <= 10; i++) {
		printf("%d\n", i);
	}
	printf("\n");
	for (int i = 1; i <= 10; i++) {
		if (i % 2 == 0) {
			printf("%d\n", i);
		}
	}

	//p.143 (2)
	//1���� 100���� 6����� ���(for��)
	for (int i = 1; i <= 100; i++) {
		if (i % 6 == 0 ) {
			printf("%d\n", i);
		}
	}

	for (int i = 0; i <= 100; i++) {
		if (i % 6 == 0&&i!=0) {
			printf("%d\n", i);
		}
	}
	
	for (int i = 0; i <= 100; i++) {
		if (i != 0) {
			if (i % 6 == 0) {
				printf("%d\n", i);
			}
		}
	}

	return 0;
}