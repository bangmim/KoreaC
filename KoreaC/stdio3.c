#include <stdio.h>

/*
int main(){
return 0;
}				// main만 있으면 작동된다. int 보다 void로 사용
*/


void main3() {
	// 자주 바뀔 것 같은 혹은 중요한 정보는 미리 저장을 해두어야 한다.
	// 변수 (저장공간)
	// p.32

	char 변수1 = 'a';		//변수1이라는 공간을 만들고, 공간에 a 저장
	char 변수2 = 'B';

	int num1 = 123;			//num1 공간에 123 저장

	//저장하는 데이터에 따라 공간의 형태(자료형)가 다르다.
	//정수 : int			출력할 때 : %d
	//문자 : char						%c
	//실수 : float						%f
	//문자 여러개 : char[]				%s

	//변수를 만드는 방법
	//형태(자료형) 공간이름 = 값;

	char 이름[] = "홍길동";			
	int 나이 = 25;
	float 몸무게 = 80.7;
	char 문자 = 'A';

	//변수를 사용하는 법
	//char -> %c
	//int -> %d
	//float -> %f
	//char[] -> %s

	printf("%d", 나이);
	printf("\n%s", 이름);
	printf("\n몸무게는 %.1f", 몸무게);	//소수점 자리수 지정 가능
	printf("\nname: %s, age: %d", 이름, 나이);
}