#include <stdio.h>

int getBigger(int n1, int n2) {
	if (n1 > n2) {
		return n1;
	}
	else if (n1 < n2) {
		return n2;
	}
	else {
		return 0;
	}
}

int main3() {
	//p.223 예제

	int result;

	result = add(3, 5);				//함수 호출(사용)
	printf("함수가 반환한 값:%d\n", result);

	//p.228

	result = getBigger(3, 5);
	printf("첫번째 결과:%d\n", result);

	result = getBigger(8, 2);
	printf("두번째 결과:%d\n", result);

	result = getBigger(4,4);
	printf("두번째 결과:%d\n", result);

	//p.231

	return 0;
}


int add(int a, int b) {			//함수 구현 {} : 정의하는 곳			//원형과 구현으로 나눌 수 있다.
	return a + b;
}
