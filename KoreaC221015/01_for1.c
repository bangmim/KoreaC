# include <stdio.h>

int main1() {
	//while로 3번 반복하기
	int num1 = 0;
	while (num1 < 3) {
		printf("while [%d]\n", num1);
		num1++;
	}
	printf("====================================================\n");
	//for로 3번 반복하기
	for (int num2 = 0; num2 < 3; num2++) {
		printf("for [%d]\n",num2);
	}
	printf("====================================================\n");
	//while 또는 for가 사용할 수 있는 문법
	//1.break; 반복문 강제 종료
	//2.continue; 조건검사로 돌아감

	for (int num2 = 0; num2 < 3; num2++) {
		break;							//블록 안에 있는 반복문 종료
		printf("break [%d]\n", num2);
	}
	printf("====================================================\n");
	for (int num1 = 0; num1 < 3; num1++) {
		continue;							//continue를 만나는 순간 아래 식(printf)을 무시하고 증감 및 조건검사하는 부분()소괄호 부분으로 올라간다. (반복되어 print 되지 않는다.)
		printf("continue [%d]\n", num1);
	}
	printf("====================================================\n");
	for (num1 = 0; num1 < 3; num1++) {
		if (num1 == 1) {
			continue;							//continue는 조건문과 함께 사용된다.
		}
		printf("continue+if [%d]\n", num1);
	}
	printf("====================================================\n");
	for (num1 = 0; num1 < 5; num1++) {
		if (num1 == 2) {
			break;
		}
		printf("break+if [%d]\n", num1);
	}
	printf("====================================================\n");
	for (num1 = 0; num1 <3; num1++) {
		if (num1 == 2) {
			printf("숫자는 2\n");				//반복문 안에서 조건문 : 조건문 실행이 끝나고 반복문 마저 실행
		}
		printf("반복문 실행중!\n", num1);
	}
	printf("====================================================\n");
	for (num1 = 0; num1 < 3; num1++) {
		for (int num4 = 0; num4 < 3; num4++) {
			printf("반복문 안 실행중[%d]\n", num4);			//반복문 안에서 반복문 : 안에 반복문 실행이 끝나고 (바깥)반복문 마저 실행
		}
		printf("===========반복문 바깥 실행중 [%d]====================\n", num1);
	}
}