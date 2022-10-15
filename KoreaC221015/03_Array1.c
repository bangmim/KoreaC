#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//배열 : 변수를 모아놓은 것
	//char arr1[100];				//char 변수 100개를 모아놓은 것 

	//Array 사용하는 이유?
	//1.변수를 여러개 만들기 변거로워서
	//2.하나의 변수명으로 여러개의 값을 따로 관리하기 위해서(ex.카페메뉴 변수명 100개 -> 변수명 1개)

	//3개이든, 10000개이든 하나의 코드로 관리 가능하다.
	int num[3] = { 1,10,100 };
	for (int i = 0; i < sizeof(num) / sizeof(int); i++) {
		printf("%d\n", num[i]);
	}

	/*char str1[100] = { 'h','i','\0' };
	char str2[100] = 'h!';
	int num1[100] = { 0,1,2,3,4,5,56 };
	float fNum1[100] = { 0.0f,1.0f, };*/

	//p.150 예제
	/*int numbers[3] = { 1,2,3 };
	char characters[] = { 'a','b','c','d','e' };

	numbers[0]=0;
	numbers[1] = 10;
	numbers[2] = 33;

	printf("%d\n", numbers[0]);
	printf("%d\n", numbers[1]);
	printf("%d\n", numbers[2]);*/

	//p.152,154,156,157
	//int i;
	//int odd[3];				//초기화되지 않은 배열
	//int even[5] = { 2,4,6,8,10 };

	////배열의 개별 요소 초기화
	//odd[0] = 1;
	//odd[1] = 3;
	//odd[2] = 5;

	////개별 요소 접근 및 출력
	//printf("%d %d %d \n", odd[0], odd[1], odd[2]);

	////for문을 통한 배열 요소 출력
	//for (i = 0; i < 5; i++) {
	//	printf("%d ", even[i]);
	//}
	//printf("\n");

	//char greet[] = "Hello,Guys!";
	//printf("1차원 배열  greet의 길이는 : %d\n", sizeof(greet));

	//char mind[30] = "I Love programming";
	//printf("%s\n", mind);

	//mind[7] = '\0';			//8번째 요소로 널 문자 삽입
	//printf("%s\n", mind);	//널 이후로 출력되지 않는다. (널 문자는 문자열의 끝을 의미하는 문자. 문자열 중간에 널 문자를 삽입해 문자열의 끝을 변경하는 것이 가능하다)

	//mind[1] = '\0';
	//printf("%s\n", mind);

	//char str[50];
	//printf("문자열을 입력하세요: ");
	//scanf("%s",str);		//&연산자를 사용하지 않는다.

	//printf("입력된 문자열 : %s\n", str);

	//p.158 (1),(3)
	//(1)길이가 5인 int형 배열 선언. 초기화 리스트 사용하여 초기화. 
	int arr[5]={1,2,3,4,5};
	int total = 0;
	float avg = 0.0f;
	//총합
	//printf("배열의 모든 요소의 총합 : %d\n", arr[0] + arr[1] + arr[2] + arr[3] + arr[4]);
	//강사님 : for 반복문을 통해
	
	for (int i = 0; i < 5; i++) {
		total += arr[i];
	}
	printf("배열의 모든 요소의 총합 : %d\n", total);

	avg = (float)total / (sizeof(arr) / sizeof(int));								//sizeof(arr)/sizeof(int) : array index의 개수를 알 수 있다.

	//배열의 모든 요소의 평균(실수형으로 출력)
	//int avg = (arr[0] + arr[1] + arr[2] + arr[3] + arr[4]) / 5;
	printf("배열의 모든 요소의 평균 : %f\n", avg);

	//(2)단어를 입력받아 역순으로 출력하는 프로그램
#define ARR_SIZE 1000						//array size 지정
	char eng[ARR_SIZE] = {0,};				//0~999			//초기화 할 때에는 값을 입력해놓아야 한다.
	char oper[ARR_SIZE]={0,};
	printf("영단어 입력: \n");
	scanf("%s", eng);

	for (int i = ARR_SIZE; i > 0; i--) {
		if (eng[i - 1] == 0) {
			continue;					//null값이면 계속

			oper[ARR_SIZE - i] = eng[i - 1];
			printf("%c", oper[ARR_SIZE - 1]);
		}
	}

	//(3)사용자로부터 영어 단어 하나를 입력 받아 char형 배열에 저장.
#define ENGLI_SIZE 100
	char engli[ENGLI_SIZE];
	char bk = 0;
	printf("영어단어 입력: \n");
	scanf("%s", engli);
	bk = engli[0];

	for (int i = 0; i < ENGLI_SIZE; i++) {
		if (i == ENGLI_SIZE - 1) {
			break;
		}
		if (engli[i] >= engli[i + 1]) {
			engli[i + 1] = engli[i];
		}
		else {
			bk = engli[i + 1];
		}
	}

	printf("아스키코드가 가장 큰 문자 : %c\n", bk);

	return 0;

	}