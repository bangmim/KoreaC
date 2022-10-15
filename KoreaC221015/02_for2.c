#define _CRT_SECURE_NO_WARNING				//_s 검출 설정 제거
//#define 설정값 조정
#include <stdio.h>
#define THREE	 3								//THREE를 쓰면 3이라고 인식하게끔 설정값 세팅. (전처리기)

int main3() {
	//p.140,141 예제
	//int num;
	//while (1) {
	//	printf("-1 입력시 종료: ");
	//	scanf("%d", &num);
	//	if (num == -1) {
	//		break;
	//	}
	//}

	//for (num = 1; num <= 5; num++) {
	//	if (num == 3) {
	//		continue;
	//	}
	//	printf("%d\n", num);
	//}
	//char ascll1 = '\0';			//NULL문자 (비어있다)
	//if (ascll1 == 0) {
	//	printf("null is %d\n",ascll1);
	//}
	//char ascll2 = 'a';
	//printf("문자a은 %d과 같습니다\n",ascll2);			//97
	//char ascll3 = 'A';	
	//printf("문자A는 %d와 같습니다\n", ascll3);			//65

	//if (ascll3 < 97) {
	//	printf("대문자\n");
	//}

	//p.143 (3) 
	//무한반복 -> 입력, 소문자면 출력, 대문자면 종료

	/*char a;
	while (1) {

	printf("입력하세요(대문자 입력시 종료): \n");
	scanf("%c", &a);

	if (a >= 97 && a <= 122) {
		printf("%c를 입력했습니다.\n",a);
	}
	else if (a >= 65 && a <= 90) {
	printf("%c를 입력했습니다. 종료합니다\n", a);
	break;
	}

	rewind(stdin);

	}*/

	//(4)
	// //사용자로부터 피연산자와 연산자를 입력받아 연산 결과를 출력하는 프로그램을 작성해보세요
	//입력 예 ) 피연산자1 : 5
	//연산자:+
	//피연산자2:3
	//실행 예) 5+3=8

	char b;
	char 연산자;
	char b1;
	while (1) {
	printf("피연산자1 : \n");
	scanf("%d", &b);
	
	printf("연산자 : \n");
	rewind(stdin);							//출력되지 않는 코드 위에 쓴다.
	scanf("%c", &연산자);

	printf("피연산자2: \n");
	scanf("%d", &b1);
	
	if (연산자 == 43) {
		printf("%d + %d = %d\n",b,b1,b+b1);
	}
	else if (연산자 == 45) {
		printf("%d - %d = %d\n", b, b1, b - b1);
	}
	else if (연산자 == 42) {
		printf("%d * %d = %d\n", b, b1, b * b1);
	}
	else if (연산자 == 47) {
		printf("%d / %d = %d\n", b, b1, b / b1);
	}
	}





	return 0;
}