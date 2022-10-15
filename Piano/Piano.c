#include <stdio.h>
#include <Windows.h>					//윈도우에서 제공하는 기능을 사용
#include <conio.h>						//키보드 입력 감지
#include <mmsystem.h>					//소리
#pragma comment(lib, "winmm.lib")		//라이브러리 추가(C파일을 추가)

int main 89() {
	char key_in;			//keyboard In (_ 언더바는 " " 공백의 의미로 쓰인다.)
	int _do = 260, _re = 290, _mi = 330, _pa = 340, _sol = 380, _ra = 430, _si = 490, _do2 = 510;

	//소리테스트
	Beep(_do, 200);
	Sleep(90);
	Beep(_re, 200);
	Sleep(90);
	Beep(_mi, 200);
	Sleep(90);
	Beep(_pa, 200);
	Sleep(90);
	Beep(_sol, 200);
	Sleep(90);
	Beep(_ra, 200);
	Sleep(90);
	Beep(_si, 200);
	Sleep(90);
	Beep(_do2, 200);
	Sleep(90);
	


	//피아노 asdf jkl;
	//무한 반복 루프
	while (1) {
		if (_kbhit) {					//keyboard hit의 줄임말. 키보드가 눌리면
			key_in = _getch();			//키보드에 눌린 값을 대입

			switch (key_in) {				//키보드에 눌린 값
				//a:도, s:레, d:미,f:파, j:솔,k:라,l:시,;:높은도
			case 'a':						//키보드 a를 눌렀을 때
				printf("도");
				Beep(_do,200);				//경고음 소리 내기(200ms : 0.2s)
				Sleep(90);					//Sleep : 90ms만큼 멈춤
				break;
			case's':
				printf("레");
				Beep(_re, 200);
				Sleep(90);
				break;
			case'd':
				printf("미");
				Beep(_mi, 200);
				Sleep(90);
				break;
			case'f':
				printf("파");
				Beep(_pa, 200);
				Sleep(90);
				break;
			case'j':
				printf("솔");
				Beep(_sol, 200);
				Sleep(90);
				break;
			case'k':
				printf("라");
				Beep(_ra, 200);
				Sleep(90);
				break;
			case'l':
				printf("시");
				Beep(_si, 200);
				Sleep(90);
				break;
			case 59:						//';'의 숫자 값
				printf("도");
				Beep(_do2, 200);
				Sleep(90);
				break;
			case 27:						//'ESC'의 숫자 값
				break;
			}
			if (key_in == 27) {				//if 조건문으로 반복문 나오기 설정
				break;
			}
		
		}

	}
	


	return 0;
}