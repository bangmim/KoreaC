#define _CRT_SECURE_NO_WARNINGS
#include	<stdio.h>

void main0() {
	//int num = 0;
	//float fnum = 0.0f;
	//char c = '\0';
	//
	//printf("숫자를 입력하세요>>");				//출력
	//scanf("%d", &num);							//입력
	//printf("실수를 입력하세요>>");
	//scanf("%f", &fnum);
	//printf("문자를 입력하세요>>");
	//rewind(stdin);							//미리 문자가 들어와있는지 확인하고 있으면 제거하는 문장
	//scanf("%c", &c);
	//printf("입력한 숫자는 %d, 실수는 %f, 문자는 %c \n ",num,fnum,c);
	

	//#define이란 ? 설정값 셋팅
	//#define MY_NUMBER	123;
	//MY_NUMBER라고 적으면 123을 적은 것처럼 동작함
	//printf("%d\n",MY_NUMBER);

	char my_str[100];
	(void)scanf("%s", my_str);
	printf("내가 입력한 글은%s", my_str);

	// scanf 주의사항
	//문자열은 &없이 적기
	//scanf("%s", &my_str); -> X
	//scanf("%s", my_str);	-> O

	//문자(%c)는 입력 받기 전에 비워줘야한다. (버그 발생 위험)
	//rewind(stdin) 입력 후
	//scanf("%c", &c);

}