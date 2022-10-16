#include <stdio.h>

int main11() {
	//포인터 : 주소를 기억하는 자료형
	//변수 : 값을 기억

	int num = 3;
	printf("%d\n", num);

	int* p_num = &num;				//앞에 &기호를 붙이면 주소값으로 변경 : 포인터변수 생성

	printf("%d\n", p_num);
	printf("%d\n", &num);			//&참조(주소값)
	printf("%d\n", *p_num);			//역참조(주소를 찾아가서 안에 들어있는 값을 확인) : 이미 만들어진 변수명 앞에 *(애스터리스크)를 붙인 경우

	//p163
	char cnum = 5;
	int inum = 999;
	double dnum = 3.14;

	char* cptr = &cnum;
	int* iptr = &inum;
	double* dptr = &dnum;

	//포인터 변수의 출력에는 형식문자 %p를 사용한다. (%d 를 사용해도 된다.)
	printf("%p\n", cptr);
	printf("%p\n", iptr);
	printf("%p\n", dptr);

	printf("결과는 %d\n", (*p_num)+2);			//()괄호로 묶어서 계산도 가능하다.
	(*p_num) += 4;				//num=num+4
	printf("결과는 %d\n",*p_num);

	//p.166, p.168~170

	num = 10;
	int* pnum;
	pnum = &num;		//포인터 변수 num은 num의 주소를 저장한다.

	*pnum = 20;
	printf("num:%d\n", num);
	(*pnum)++; (*pnum)++;			//(*pnum)++ : 1
	printf("num:%d\n", num);
	printf("*pnum:%d\n", *pnum);

	//(1)
	int a = 10;
	int* p = &a;
	p = &a;					//포인터 변수에 주소를 저장한다.
	*p = 20;				//a=20; 동일하다. 역참조하여 값을 직접적으로 저장한 것이다.
	printf("%d\n", a);
	*p = 50;
	printf("%d\n", a);

	//(2)
	int number = 10;
	int* pnumber = &number;

	printf("%d\n", *pnumber);			//*pnumber==number > 포인터 출력 변수를 %d로 한다.
	printf("%p\n", pnumber);

	//(3)
	int num1 = 5;
	int num2 = 8;

	int *ptr = &num1;
	printf("%d\n", *ptr);

	ptr = &num2;				//이미 생성된 포인터 변수에 값을 넣으면, num2를 담는 주소로 바뀐다.
	printf("%d\n", *ptr);

	//(4)
	int n1 = 100, n2 = 200;
	int* ptr1 = &n1;
	int* ptr2 = &n2;

	printf("%d %d \n", *ptr1, *ptr2);

	ptr1 = &n2;
	ptr2 = &n1;
	printf("%d %d \n", *ptr1, *ptr2);

	return 0;


}