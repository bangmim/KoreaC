#include <stdio.h>

//함수 : 코드를 저장하는 것. (내가 만들어 놓은 코드를 언제든지 재사용할 수 있게 백업한다.)
//목적
//1.재사용
//2.사용자 정의 연산자(기능)

//절대값더하기 라는 이름으로 코드를 백업한다.
//값을 전달받고 동작 후에 결과를 알려준다.
//():값을 전달받는 매개변수들(임시 변수)
//return : 옆에 적은 값을 사용한 곳에 전달 (결과 알려주기)
//함수 왼쪽에 자료형은 함수의 자료형, return의 자료형과 일치해야 한다.
int 절대값더하기(int n1, int n2) {
	//절대값으로 더하기
	int result = 0;

	if (n1 < 0) {
		n1 = -n1;
	}
	if (n2 < 0) {
		n2 = -n2;
	}

	result=n1 + n2;

	return result;			//결과값을 사용하는 곳에 전달한다.
}

int 제곱승(int value, int n) {		//value의 n승
	int result = 0;
	switch (n) {
	case(0):
		result = 1;
		break;
	case(1):
		result = value;
		break;
	case(2):
		result = value * value;
		break;
	case(3):
		result = value * value * value;
		break;
	}

	return result;
}

int main12() {

	int num1 = 3;
	int num2 = -4;
	int result = 0;


	result = 절대값더하기(num1, num2);			//내가만든 함수 (); : 중괄호 없이 쓴다.		//ctrl+함수 이름 클릭 : 내가 만든 함수로 이동한다.

	printf("절대값 더하기의 결과는 %d\n", result);

	//제곱 하기
	int result1 = 제곱승(num1, 2);				
	printf("제곱 결과는 %d\n", result1);		//9

	//세제곱 하기
	int result2 = 제곱승(num1,3);			//27
	printf("세제곱 결과는 %d\n", result2);

	//제곱한 것과 세제곱한 것의 절댓값 더하기
	if (result1 < 0) {
		result1 = -result1;
	}
	if (result2 < 0) {
		result2 = -result2;
	}

	result = 절대값더하기(result1,result2);
	printf("절대값 더하기의 결과는 %d\n", result);




	return 0;
}