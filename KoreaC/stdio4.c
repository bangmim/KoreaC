//�ڱ�Ұ� �ϱ�(name, age, weight,  heihgt, gender(m/w))
//ooo�� oo���̰� �����Դ� oo, Ű�� oo, ������ o�Դϴ�.

#include <stdio.h>

void main4() {
	char name[] = "ȫ�浿";
	int age = 25;
	float weight = 60.f;
	float height = 183.9f;
	char gender = 'M';

	printf("%s�� \n%d�� �̰�, \n�����Դ� %.1fkg, \nŰ�� %.1fcm, \n������ %c�Դϴ�.", name, age, weight, height, gender);

	// p.33
	int number1 = 3;
	printf("\n%d", number1);
	int number2 = 5;
	printf("\n%d", number2);
}