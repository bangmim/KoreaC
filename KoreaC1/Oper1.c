#include <stdio.h>

void main1() {
	//연산기능을 담당하는 연산자

	/*
	대입 연산자 : =
	산술 연산자 : +,-,*,/,%(나머지)
	비교 연산자 : >,<,==,>=,<=,!=
	증감 연산자 : +=,-=,++,--,*=,%=
	논리 연산자 : &&(AND), ||(OR), !(NOT)
	*/

	/*대입연산자*/
	//대입연산자 = : 값을 변수에 저장한다.
	int n1 = 0;
	n1 = 33;

	/*산술연산자*/
	//산술연산자 +, -, *, /, % : 산술기능
	int result1 = n1 + 30;
	int result2 = n1 - 30;
	int result3 = n1 * 30;
	int result4 = n1 / 30;
	int result5 = n1 % 30;
	
	//p.74 예제

	int num1 = 7, num2 = 3;
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);	//몫이 반환된다.
	printf("%d %% %d = %d\n", num1, num2, num1 % num2);	

	printf("result: %d %d %d %d %d\n", result1, result2, result3, result4, result5);

	/*비교연산자*/
	//비교연산자 >,<,>=,<=,==,!= : 비교를 해서 맞으면 1, 틀리면 0으로 결과를 알려준다.

	num1 == 7;		//1
	num2 == 3;		//1
	num1 == num2;	//0
	printf("%d\n", num1 == num2);	//0
	printf("%d\n", num2 == 3);		//1

	//다르다 !=
	num1 != num2;	//1
	num2 != 3;		//0
	printf("%d\n", num1 != num2);	//1
	printf("%d\n", num2 != 3);		//0

	//p.79 예제
	int a = 10, b =11;
	printf("a == b : %d\n", a == b);	//0
	printf("a > b : %d\n", a > b);		//0
	printf("a < b : %d\n", a < b);		//1
	printf("a >= b : %d\n", a >= b);	//0
	printf("a <= b : %d\n", a <= b);	//1
	printf("a != b : %d\n", a != b);	//1

	/*누적&증감 연산자*/
	//누적/증감 연산자 +=,-=,*=,/=,%=
	n1 = n1 + 30;		//n1+=30
	
	int n2 = 1;
	n2 = n2 + 1;	//n2=1+1	//n2+=1
	n2 + 1;			//대입연산자 =, 변수에 담지 않는 이상 무의미함.
	printf("결과는 %d \n", n2);
	
	n2 = n2 + 1;		//n2+=1
	n2 = n2 - 1;		//n2-=1
	n2 = n2 * 1;		//n2*=1
	n2 = n2 / 1;		//n2/=1
	n2 = n2 % 1;		//n2%=1
	

	//p.77 예제
	num1 = 3;	//위에 자료형과 변수로 선언하였음. 자료형 없이 적어줘야 한다.
	num2 = 4;

	num1 += 3;
	num2 *= 4;

	printf("num1+=3의 결과 : %d\n", num1);
	printf("num2*=4의 결과 : %d\n", num2);

	//증감연산자 ++, -- : 변수에 저장된 값을 1만큼 증가시키거나 1만큼 감소시킬 때 사용하는 연산자.
	n1 = 0;
	n1 = n1 + 1;

	n1 += 1;
	n1++;	//++n1 : 1씩 증가

	n2 = 5;
	n2 = n2 - 1;	

	n2 -= 1;	
	n2--;	//--n2 : 1씩 감소

	//++기호가 앞에 쓰면 우선 적용
	//++기호가 뒤에 있으면 문장 끝나고 ;후에 적용
	//해당 변수의 값에 1을 더한다.

	n1++;			//n1 = n1 + 1;
	int n3 = 0;
	//n3++;
	printf("%d\n", n3++);		//printf("%d\n", ++n3); >>1로 바뀌고 1로 출력된다, printf("%d\n", n3++);>>0로 출력되고 1로 바뀐다.
	printf("%d\n", n3);			//1

	//p.81 예제

	a = 10;			//위에 자료형과 변수로 선언하였음. 자료형 없이 적어줘야 한다.
	b = 10;

	printf("a:%d\n", a);	//10
	printf("a:%d\n", ++a);	//11		//증가를 먼저 하고 출력한다. (a가 11이 된 후 출력한다.)
	printf("a:%d\n", a);	//11

	printf("b:%d\n", b);	//10
	printf("b:%d\n", b++);	//10		//출력을 먼저 하고 증가한다. (b가 10일 때 출력된 후 1만큼 증가한다.)
	printf("b:%d\n", b);	//11

	/*논리연산자*/
	//논리연산자 &&,||,! : 이미 비교를 한 값에 대해 추가 연산.
	//논리 연산자 양 옆에는 비교 연산자를 적는다.
	// 1(참) 또는 0(거짓)으로 반환한다.

	// && : AND, 양 옆이 모두 참이면 참(1)
	// || : OR, 둘 중 하나라도 참이면 참(1), 둘 다 틀려야 거짓(0)
	// ! : NOT 반대, 참이면(0), 거짓이면(1)

	//&&
	3 > 1 && 5 > 1;		//1
	3 > 1 && 5 < 1;		//0
	3 < 1 && 5 < 1;		//0

	//||
	3 > 1 || 5 > 1;		//1
	3 > 1 || 5 < 1;		//1
	3 < 1 || 5 < 1;		//0

	//!
	3 > 1;		//1
	!(3 > 1);	//!(1) == 0
	!(3 < 1);	//!(0) == 1

	//p.91 예제

	num1 = 20;
	num2 = 10;
	int result;

	result = 1 && 1;
	printf("result1 : %d\n", result);		//1

	result = num1 == 20 && num2 == 10;
	printf("result2 : %d\n", result);		//1

	result = num1 > num2 && num1 == num2;
	printf("result3 : %d\n", result);		//result=1&&0  >> 0

	result = num1 > num2 && !(num1 == num2);
	printf("result3 : %d\n", result);		//result=1&&!(0) = 1&&1 >> 1

}