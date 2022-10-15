#define _CRT_SECURE_NO_WARNINGS					//<stdio.h> 위에 작성한다. 또는 프로젝트 > 속성 > C/C++ > SLD 검사 > 예->"아니오"로 변경
#include <stdio.h>								//scanf, printf가 있다.

//Review.c

int main58()
{
	//1.변수
	// 변수 : 저장공간
	/*int 정수 =0;
	float 실수=0.0f;
	char 문자='a';
	char 문자열변수[100]='aaaa';*/				//영어와 숫자는 99개까지, 한글은 49개 까지


	//2.자료형
	// 변수에 저장될 값을 미리 표기
	int 숫자1 = 3;
	float 실수1 = 3.14f;

	//저장된 값의 자료형을 바꾸는 방법
	(int)실수1;									//3.14 -->3
	//printf("실수1은 %f 정수 입니다\n", 실수1);
	(float)숫자1;								//3-->3.0000

	//3.조건문
	// if(){} ~ else if(){} ~ else{}
	if (숫자1 > 2) {
		//소괄호 안에 내용이 맞을때만 실행할 문장들;
		숫자1 = 2;
		printf("2를 초과할 수 없습니다.\n");
	}
	else if (숫자1 > 0) {
		printf("양수입니다.\n");
	}
	else if (숫자1 == 0) {
		printf("숫자는 0 입니다\n");
	}
	else {
		printf("숫자는 음수입니다.\n");
	}

	//switch(){case/break}
	// if는 소괄호가 맞으면 중괄호를 실행하지만 switch는 일치한 case 부터 실행한다.
	int 숫자2 = 2;
	/*printf("저장할 숫자를 입력하세요>>");
	scanf("%d", &숫자2);*/								//scanf : 키보드 입력받기

	switch (숫자2) {
	case 0:
		printf("숫자2는 %d입니다\n", 숫자2);
		break;
	case 1:
		printf("숫자2는 %d입니다\n", 숫자2);
		break;
	default:
		printf("일치하는 값이 없습니다\n");
	}

	//4.반복문
	//while(){} 
	//동작은 if 와 유사하게 하나 차이점은 {} 중괄호 실행 후 () 소괄호 검사를 다시한다.
	//if처럼 ()소괄호의 조건이 맞으면 {}중괄호를 실행한다. 실행 후에는 ()소괄호로 돌아간다.
	int a = 0;
	while (a != 3) {
		printf("a는 3이 아닙니다. [%d]\n", a);
		a++;
	}
	//5. 입력과 출력

	//Q. 무한반복으로 숫자를 입력받고 출력하세요. 다만, 입력 숫자가 0인 경우 반복을 종료합니다.
	//입력값 : 1
	//프로그램 종료
	/*int b = 1;

	while (1) {
		printf("숫자를 입력하세요>>");
		scanf("%d", &b);
		if (b == 0) {
			printf("프로그램 종료");
			break;
		}
	}*/

	//for : while을 정리 (간소화)
	/*for (int aa = 1; aa != 0;) {
		printf("숫자를 입력하세요 :");
		scanf("%d", aa);

		if (aa != 0) {
			printf("종료");
			break;
		}
	}*/

	return 0;
}