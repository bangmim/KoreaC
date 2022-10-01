#include <stdio.h>

void main() {
	//p.110
	char alpha = 'C';

	if (alpha == 'a') {
		printf("alpha is A\n");
		printf("I like apple");
	}
	else if (alpha == 'B') {
		printf("alpha is B\n");
		printf("I like banana");
	}
	else if (alpha == 'C') {
		printf("alpha is C\n");
		printf("I like carrot.\n");
	}
	else
	{
		printf("I hate fruit & vegetable");
	}

	//p.113 (else절 생략 가능)
	int num;
	printf("input your number:");
	(void)scanf("%d", &num);

	if (num == 2) {
		printf("your number is 2");
	}
	else if (num == 4) {
		printf("your number is 4");
	}
	else if (num == 8) {
		printf("your number is 8");
	}
	


}