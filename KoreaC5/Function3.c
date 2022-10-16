#include "소스.h"		//stdio.h 까지 가지고 왔다.

//p.233

int g_num = 3;			//전역변수 (프로그램 종료 시에 삭제되는 변수)
//지역변수 : 함수 종료시에 삭제되는 변수
//전역변수를 너무 많이 사용하면 프로그램 성능이 떨어진다.
//전역변수는 힙이라는 공간에 생성되며 지역변수는 스택이라는 공간에 생성된다. (힙은 공간이 작고, 스택은 공간이 크다)

//변수는 {}안에서 만들어지고, 해당 {}를 벗어나면 삭제된다.
int localFunc(int num) {
	
	int num3 = 1;						//localFunc 안에서만 사용 가능한 변수
	//printf("%d\n", num2);				//main에서 만들어지고 없어지는 변수 -- 지역변수 (함수 안에서 만들어진 변수)
	printf("%d\n", g_num);				//전역변수 사용

	if (num > 90) {
		num++;
	}

	int result = 0;
	return result + num;
}


int main13() {

	int num2 = 0;					//main에서만 사용 가능한 변수
	//printf("%d\n", num3);			//local Func에서 만들어지고 없어지는 변수 -- 지역변수
	printf("%d\n", g_num);
	
	//조건문, 반복문 안에서 만든 변수
	if (1) {
		int num4 = 5;
	}
	//printf("%d\n", num4);

	static int s_num = 99;				//함수 안에서 만들어지는 전역변수(함수가 끝나도 제거되지 않는다.)
	localFunc(s_num);
	printf("static의 변수 %d\n", s_num);

	int num = 5;
	int result = localFunc(num);
	printf("결과 :%d\n", result);


	return 0;			//main의 리턴은 프로그램이 종료될 때 알려줄 메시지

}