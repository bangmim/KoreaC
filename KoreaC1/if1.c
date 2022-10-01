#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main1() {
	int num = 11;

	//(조건) ?	(참인경우 실행할 코드) : (틀리면 실행할 코드)
	(num > 10) ? printf("큰수") : printf("작은수");

	//내가 입력한 수가 홀수면 "홀수", 짝수면 짝수, 1이면 홀수
	//10 % 2 ==0 //짝수
	//7%2==1	//홀수

	(void)scanf("\n%d", &num);

	(num % 2 == 0) ? printf("짝수") : printf("홀수");

}