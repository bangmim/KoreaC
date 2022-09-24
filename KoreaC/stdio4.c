//자기소개 하기(name, age, weight,  heihgt, gender(m/w))
//ooo은 oo살이고 몸무게는 oo, 키는 oo, 성별은 o입니다.

#include <stdio.h>

void main4() {
	char name[] = "홍길동";
	int age = 25;
	float weight = 60.f;
	float height = 183.9f;
	char gender = 'M';

	printf("%s은 \n%d살 이고, \n몸무게는 %.1fkg, \n키는 %.1fcm, \n성별은 %c입니다.", name, age, weight, height, gender);

	// p.33
	int number1 = 3;
	printf("\n%d", number1);
	int number2 = 5;
	printf("\n%d", number2);
}