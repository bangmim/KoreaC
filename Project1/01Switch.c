#include <stdio.h>

void main35() {
	//조건문 if, switch

	//비교 
	//if(){}
	//else if(){}
	//else{}

	//switch(){} : 같은 값을 비교할때 한정 (범위 X, 같은 값O / 조건의 값을 case마다 비교)
	
	/* <구조>
	
	swtich(표현식){			//조건에 적는 표현식의 값은 정수로 반환되어야 한다. 반환되는 숫자를 case 옆에 숫자로 적음.
	case :
		printf();
		break;
	...

	default:
		printf();
		break;					//생략 가능
	}
	*/

	int num1 = 3;
	switch (num1) {
	case 0:
		printf("0과 같을 때 실행\n");
		break;												//case마다 break; 적어야한다. (적지 않으면 break까지 있는 case까지 모두 실행된다.)
	case 1:
		printf("1과 같을 때 실행\n");
		break;
	case 2:
		printf("2과 같을 때 실행\n");
		break;
	case 3:
		printf("3과 같을 때 실행\n");
		break;
	default:														
		printf("하나도 맞는 게 없을 때 실행\n");

	}

	//p.118
	/*int num;
	printf("input some positive number : ");
	(void)scanf("%d", &num);

	switch (num) {
	case 1:
		printf("num is 1\n");
		break;
	case 2:
		printf("num is 2\n");
		break;
	case 3:
		printf("num is 3\n");
		break;
	default:
		printf("maybe bigger than 3\n");
	}

	printf("Switch state end.\n");*/

	//p.121
	/*int num2;
	printf("input some positive number: ");
	(void)scanf("%d", &num2);

	switch (num2) {
	case 1:
	case 3:
	case 5:
		printf("odd\n");
		break;
	case 2:
	case 4:
	case 6:
		printf("even\n");
			break;
	default:
		printf("maybe bigger than 6\n");
	}
	printf("switch state end.\n");*/

	//p.123 (4)

	/*int kor = 88;
	int eng = 90;
	int mat = 58;
	int his = 81;
	int sci = 72;

	float avg = (kor + eng + mat + his + sci) / 5;
	char grade;*/

	int kor, eng, mat, his, sci, total;
	float avg;

	kor = 88, eng = 90, mat = 58, his = 81, sci = 72;
	total = kor + eng + mat + his + sci;
	avg = total / 5.f;
	
	char grade;

	//
	switch ((int)avg/10) {							//case 옆에는 int가 작성되므로, float -> int로 변환. avg 앞에 (int)를 적어준다.
	case 9:
		grade = 'A';
		break;
	case 8:
		grade = 'B';
		break;
	case 7:
		grade = 'C';
		break;
	case 6:
		grade = 'D';
		break;
	default:
		grade = 'F';
	}
	printf("짱구의 평균은 %.2f이고, 학점은 %c이다.", avg, grade);			//출력은 switch 구문 밖에서


	//if로 풀이

		/*if ((int)avg >= 90) {
			grade = 'A';
		}
		else if ((int)avg >= 80) {
			grade = 'B';
		}
		else if ((int)avg >= 70) {
			grade = 'C';
		}
		else if ((int)avg >= 60) {
			grade = 'D';
		}
		else {
			grade = 'F';
		}

		printf("짱구의 평균은 %.2f이고, 학점은 %c이다.", avg, grade);*/


	







}