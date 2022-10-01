#include <stdio.h>

void main2()
{
	int num = 3;

	//조건문 if(){}
	//소괄호 안에 내용이 맞으면 {} 실행하고
	//소괄호 안에 내용이 틀리면 {} 무시한다.
	//()안에 조건을 적고, {}안에 조건이 맞을때 실행할 코드를 적는다.

	if (num%2==0) {
		printf("짝수\n");
	}

	if (num % 2 == 1) {
		printf("홀수\n");
	}

	//교재 105

	num = 9;
	if (num < 3) {
		printf("num is smaller than 3!\n");
	}
	if (num == 3) {
		printf("num is 3!");
	}
	if (num > 3) {
		printf("num is bigger than 3!\n");
	}

	if (num < 3) {
		printf("3보다 작다!\n");
	}
	else {
		printf("if 조건이 틀리고, 3보다 크거나 같다\n");
	}

	// age 변수를 만들고 적절한 나이를 준 다음 20 이상이면 성인, 20 미만은 미성년자

	int age = 50;
	if (age >= 20) {
		printf("성인\n");
	}
	else {
		printf("미성년자\n");
	}

	//10보다 작으면 어린이
	//10~19 >10대
	//20~29>20대
	//30~39>30대
	//기타

	age = 22;
	if (age < 10) {
		printf("어린이\n");
	}
	else if (age < 30) {
		printf("20대\n");
	}
	else if (age < 20) {
		printf("10대\n");
	}
	else if (age < 40) {
		printf("30대\n");
	}
	else {
		printf("기타");
	}

}