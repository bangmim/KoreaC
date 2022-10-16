#include <stdio.h>

//p.234 전역변수

int number = 0;		//전역변수 number;

void __printNumber(void) {
	printf("전역변수 number는 %d를 저장하고 있다!\n", number);

	//함수에 return이 없을 때 함수의 자료형은 void
	// return; 생략
}

void __staticNumber() {
	//static 변수(데이터영역)
	static int s_number = 4;		//static 변수(지역에서 생성되나 프로그램이 종료될 때 삭제된다.)
	s_number++;
	printf("%d\n", s_number);
}

//p.235
void increaseNumber() {
	static int number = 0;			//static 지역변수 number 선언
	number++;
	printf("number : %d\n", number);

}

int main5(void) {		
	int number = 3;		//지역변수		//만약 전역변수와 이름이 같으면 지역변수를 우선으로 사용한다.
	printf("지역변수 number는 %d를 저장하고있다!\n", number);
	__printNumber();
	
	__staticNumber();
	__staticNumber();
	__staticNumber();

	increaseNumber();
	increaseNumber();
	increaseNumber();
	increaseNumber();
	increaseNumber();

	return 0;
}