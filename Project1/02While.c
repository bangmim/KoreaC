#include <stdio.h>

int main32() {

	//조건문 : if, switch () 
	//반복문 : while, for

	
	/* <구조>
	
	while(조건){
	(조건이 참이면 반복할 내용);
	(변수의 값을 변경할 조건-->해당 조건까지 반복한다);
	}
	*/

	int num2 = 9;
	int 횟수 = 0;
	
	while (횟수 < 10) {
		if (num2 < 10) {
			printf("10보다 작다\n");
		}
		횟수++;
	}

	//p.127,128,130 예제

	//p.127
	int num1 = 0;
	while (num1 < 10) {
		printf("num is %d now\n",num1);
		num1++;
	}

	//p.128
	/*int num = 0;
	while (num != -1) {
		printf("숫자를 입력하세요 (-1입력시 종료):");
		scanf("%d", &num);
		if (num == -1) {
			printf("종료합니다");
		}
		else {
			printf("%d를 입력하셨네요\n", num);
		}
	}*/

	//p.130 (무한루프)
	/*int num3;
	while (1) {
		printf("무한 반복중... 숫자를 입력하세요: ");
		scanf("%d", &num3);
		printf("%d를 입력하셨네요\n", num3);
	}

	return 0;*/

	//p.143 (1)
	//1부터 n까지의 합을 구하여 출력하는 프로그램 (while)
	
	int num5;
	int i=1;
	int sum=0;

	printf("정수를 입력하세요 :");
	scanf("%d", &num5);

	while (i<=num5) {
		sum += i ;
		i++;
	}

	printf("1부터 %d까지의 합은 %d 입니다.", num5, sum);


	//do~while과 while의 차이
	//do~while: 조건이 틀려도 무조건 1번은 실행
	//while은 조건이 틀리면 실행 안함.

	//틀린조건
	//while (0 > 3) {
	//	printf("while 실행 안됨\n");
	//}

	////do~while
	//do {
	//	printf("do~while 실행 안됨\n");
	//} while (0 > 3);



	return 0;

}