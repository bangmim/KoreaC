#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main7() {

	// p.122 (1)
	int num = 3;
	
	if(num == 2) {
		printf("state 1\n");
	}
	else if (num > 2 && num < 4) {
	printf("state 2\n");
		 }
	else if (num == 3) {
	printf("state 3\n");
	}
	else {
	printf("state 4\n");
	}

	//(2)

	int num1;
	printf("정수를 입력하세요:");
	(void)scanf("%d", &num1);

	if (num1 % 2 == 0) {
		printf("입력한 정수는 짝수입니다");
	}
	else {
		printf("입력한 정수는 홀수입니다");
	}




}