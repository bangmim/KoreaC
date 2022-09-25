#include <stdio.h>

void main() {
	int number1 = 3 + 4 + 5;
	int number2 = 3 + 4 * 5;
	int number3 = (3 + 4) * 5;
	float number4 = number3 / 3.f;
	printf("%.1f\n\n", number4);	//.f : 소수점 1번째 자리에서 반올림, .1f: 소수점 2번째 자리에서 반올림

	//p.86 (3번)
	/*
	int kor = 86;
	int eng = 75;
	int mat = 88;
	int his = 60;
	int sci = 97;
	*/

	/*강사님 답안*/
	int kor=86, eng=75, mat=88, his=60, sci =97;
	int sum = kor + eng + mat + his + sci;
	float avg = sum / (float)5;

	//float avg = (kor + eng + mat + his + sci) / 5.f;	//81.1999
	printf("짱구의 평균은 %.1f 입니다\n\n", avg);

	//문제2
	float num1 = 136.4f;	//6
	float num2 = 37.11f;	//7
	
	//일의 자리 수만 변수로 저장해서 출력

	int a = (int)num1 % 10;
	printf("%d\n", a);
	int b = (int)num2 % 10;
	printf("%d\n", b);

	//문제3
	//필요한 바구니의 개수
	//바구니 한개에 복숭아 10개 들어갑니다.
	//바구니가 몇 개 필요한지 계산하는 코드를 만들어주세요

	int 복숭아1 = 33;
	int 복숭아2 = 17;

	int 바구니1 = (복숭아1 / 10) + 1;
	int 바구니2 = (복숭아2 / 10) + 1;

	printf("필요한 바구니의 개수는 %d 입니다", 바구니1);
	printf("필요한 바구니의 개수는 %d 입니다", 바구니2);
}