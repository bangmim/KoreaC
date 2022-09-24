#include <stdio.h>

void main10(){
	//type : 자료형
	//자료형 : char, int, float, ...

	//자료형을 써야하는 이유?
	//1.개발자의 실수를 컴파일러(Visual Studio)가 방지하기 위해
	//2.개발자의 의도를 명확화

	//변수형은?
	//개발자의 편리한 수정을 위해

	/*
	char name[] : "" 문자열
	char name : '' 문자(1칸)	//1칸 = 126
	int name : 정수(4칸)
	float name : 실수(4칸)
	*/
	
	//자료형에 따라서 칸  수가 다르다
	char phone[] = "010-1222-2222";	//문자열 -1칸 *내가 적은 문자 개수 +1
	char aa = 'A';					//문자 -1칸

	short num3 = 12u;				//2칸 숫자(정수)
	int num = 123;					//4칸 숫자(정수)
	long num33 = 12l;				//8칸 숫자(정수)

	float num2 = 3.14f;				//4칸 실수
	double num22 = 3.14f;			//8칸 실수
	/*
	printf("%d\n", num);
	printf("%d\n", (int)sizeof(phone));
	printf("%d\n", (int)sizeof(num));
	printf("%d\n", (int)sizeof(num2));
	printf("%c\n", (int)sizeof(aa));	//(int)sizeof : int로 자료형 변환

	//p.45(2)
	printf("%d\n", (int)sizeof(int));
	printf("%d\n", (int)sizeof(char));
	printf("%d\n", (int)sizeof(short));
	printf("%d\n", (int)sizeof(50));
	printf("%d\n", (int)sizeof(float));
	printf("%d\n", (int)sizeof(3.14f));	//4칸 : 소수점 있는 숫자.f ->float
	printf("%d\n", (int)sizeof(3.14));	//8칸 : 소수점 있는 숫자 -> double
	
	//float f = 3.14;	//경고발생 : double 에서 float으로 잘립니다.
	float f = 3.14f;
	int number = 3;

	//자료형 변환 : 공간의 형태를 바꿈
	//정수 > 실수
	//정수 > 문자
	//실수 > 정수

	//자료형을 바꾸는 방법 : 변수 앞에 소괄호 안에 원하는 자료형을 적는다.> (자료형)변수
	printf("%d\n", (int)f);
	printf("%f\n", (float)number);
	*/

}