//p.237 (숙제)

#include <stdio.h>

int 사칙연산(int a, int b) {
	int result = 0;
	int 더하기 = a + b;
	int 빼기 = a - b;
	int 곱하기 = a * b;
	float 나누기 = a / (float)b;

	result = printf("더하기:%d, 빼기: %d, 곱하기: %d, 나누기: %d\n", 더하기, 빼기, 곱하기, 나누기);

}

int num2(int a, int b) {
	int result = 0;
	int sum = 0;

	if (a > b) {
		for (int i = b+1; i < a; i++) {
			sum +=i;
		}
	}

	if (a < b){
		for (int i = a+1; i < b; i++) {
			sum +=i;
		}
	}

	result = printf("%d와 %d 사이의 합은 %d\n", a, b, sum);
}

int num3(int __a) {
	int b = __a+200;
	int c = (b-__a)/7 ;
	int result = 0;

	result = printf("%d와 %d 사이 7의 배수는 %d 개 입니다.\n", __a, b, c);

}

int num4(int _height) {
	int result = 0;
	
	result = printf("결과 : %d m", _height);
}

int main() {
	//(1) 두개의 정수를 매개변수로 입력받아 두 정수의 덧셈, 뺄셈, 곱셈, 나눗셈 결과를 모두 출력하는 함수를 정의하고, main 함수에서 이를 호출하는 프로그램 작성
	사칙연산(2,4);

	//(2) 두개 정수 매개변수로 입력받아 두 정수 사이에 있는 모든 정수의 합을 구하여 반환하는 함수 정의, main에서 호출
	num2(5, 9);

	//(3) 한개의 정수 매개변수로 입력받아, 입력받은 수와 그 수와 200 더 큰 정수 사이에 7의 배수가 몇 개나 존재하는지 구하고 그 결과를 반환하는 함수 구현. 
	int a = 0;
	printf("정수를 입력하세요 : \n");
	scanf("%d", &a);
	num3(a);

	//(4) 키를 cm 단위로 입력받아 입력받아 m 단위로 환산하여 출력하는 프로그램 작성. 사용자 정의 함수를 정의하고 입력받은 키를 함수의 인자로 전달받아 cm를 m단위로 변환하는 기능을 수행하도록 합니다.
	//실행 예 
	//결과 : 1.81m
	int height = 0;
	printf("키를 cm 단위로 입력하세요 : \n");
	scanf("%d", &height);
	num4(height);

	//(5) 초(second)를 입력받ㅇ ㅏ사용자 함수에 인자로 전달. 매개 변수로 초를 입력받아 (정수)시/분/초의 형태로 출력하는 함수 구현.
	//실행예
	//몇 초 : 3615
	//결과 : 1시간/0분/15초

	return 0;
}