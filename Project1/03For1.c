#include <stdio.h>

int main44() {
	//반복문: while, for

	int flag = 0;		// 기준점(변수지정)
	while (flag < 3) {
		printf("%d번", flag);
		printf("\n");

		flag++;			//기준점 변경(무한반복 피하기 위해)
	}

	//while : 변수도 따로 지정, 기준점 증가시켜줘야 한다.
	//for : 기준점 관련된 것은 한 곳에 적을 수 있다.

	for (int plat = 0; plat < 3; plat++) {
		printf("%d번", plat);
		printf("\n");
	}

	/*
	for(초기값; 조건식; 증감량;){
		반복할 내용;
	}
	초기값 : 변수의 선언 및 초기화
	*/

	//p.135
	//int i;
	for (int i = 0; i < 3; i += 1) {
		if (i < 2) {
			printf("===");
		}

		printf("i is %d now\n", i);
	}

	//for문 1~10 출력
	//짝수만 출력

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
	//1부터 100까지 6배수만 출력(for문)
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