#include<windows.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include <string.h>

#include<ctype.h>
#include<dos.h>
void SetCurrentCursorPos(int x, int y)    // 커서 위치 이동 함수
{
	COORD pos = { x , y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);


}

COORD GetCurrentCursorPos()     // 현재 커서 위치를 얻는 함수
{
	COORD curPoint;
	CONSOLE_SCREEN_BUFFER_INFO curInfo;

	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &curInfo);

	curPoint.X = curInfo.dwCursorPosition.X;
	curPoint.Y = curInfo.dwCursorPosition.Y;

	return curPoint;
}

void reset() {
	system("cls");
}

void title(void) {
	int x = 5; //타이틀화면이 표시되는 x좌표 
	int y = 4; //타이틀화면이 표시되는 y좌표 

			   // 색상 변경
			   // 0번 검정색, 1번 파란색, 2번 초록색, 3번 옥색, 4번 빨간색, 5번 자주색, 6번 노란색, 7번 흰색, 8번 회색, 9번 연한 파란색
			   // 10번 연한 초록색, 11번 연한 옥색, 12번 연한 빨간색, 13번 연한 자주색, 14번 연한 노란색, 15번 진한 회색


	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	SetCurrentCursorPos(x, y + 0); printf("□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□"); Sleep(150);
	SetCurrentCursorPos(x, y + 1); printf("□□■■■□□■■■■■□□□□□■■■□□□■□□□■□■□■■■■■□"); Sleep(150);
	SetCurrentCursorPos(x, y + 2); printf("□■□□□■□■□□□□□□□□■□□□■□□■□□□■□□□□□□□■□"); Sleep(150);
	SetCurrentCursorPos(x, y + 3); printf("□■□□□■□■□□□□□□□□■□□□■□□■□□□■□■□□□□■□□"); Sleep(150);
	SetCurrentCursorPos(x, y + 4); printf("□■□□□■□■■■■■□□□□■□□□■□□■□□□■□■□□□■□□□"); Sleep(150);
	SetCurrentCursorPos(x, y + 5); printf("□■□□□■□□□□□■□□□□■□■□■□□■□□□■□■□□■□□□□"); Sleep(150);
	SetCurrentCursorPos(x, y + 6); printf("□■□□□■□□□□□■□□□□■□□■■□□■□□□■□■□■□□□□□"); Sleep(150);
	SetCurrentCursorPos(x, y + 7); printf("□□■■■□□■■■■■□□□□□■■■□■□□■■■□□■□■■■■■□"); Sleep(150);
	SetCurrentCursorPos(x, y + 8); printf("□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□"); Sleep(150);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	SetCurrentCursorPos(x + 35, y + 11); printf("□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□"); Sleep(100);
	SetCurrentCursorPos(x + 35, y + 12); printf("□■■■■□■■■■□■■■■■□□■■■□□■□□□■□□■■■□□"); Sleep(100);
	SetCurrentCursorPos(x + 35, y + 13); printf("□■□□□□■□□□□□□■□□□■□□□■□■□□□■□■□□□■□"); Sleep(100);
	SetCurrentCursorPos(x + 35, y + 14); printf("□■□□□□■□□□□□□■□□□■□□□■□■■□□■□■□□□□□"); Sleep(100);
	SetCurrentCursorPos(x + 35, y + 15); printf("□■■■■□■■■■□□□■□□□■□□□■□■□■□■□■□■■■□"); Sleep(100);
	SetCurrentCursorPos(x + 35, y + 16); printf("□□□□■□■□□□□■□■□□□■□□□■□■□□■■□■□□□■□"); Sleep(100);
	SetCurrentCursorPos(x + 35, y + 17); printf("□□□□■□■□□□□■□■□□□■□□□■□■□□□■□■□□□■□"); Sleep(100);
	SetCurrentCursorPos(x + 35, y + 18); printf("□■■■■□■■■■□□■■□□□□■■■□□■□□□■□□■■■□□"); Sleep(100);
	SetCurrentCursorPos(x + 35, y + 19); printf("□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□"); Sleep(100);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	SetCurrentCursorPos(x, y + 15); printf("Please Enter Any Key to Start.."); Sleep(100);
	SetCurrentCursorPos(x + 8, y + 17); printf("이장호 BsoyOleg"); Sleep(100);


}

void twinkle()
{
	int cnt;
	for (cnt = 0;; cnt++) { //cnt를 1씩 증가시키면서 계속 반복 	//하나도 안중요한 별 반짝이는 애니메이션 효과 
		if (_kbhit()) break; //키입력이 있으면 무한루프 종료 
		if (cnt % 50 == 0) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
			SetCurrentCursorPos(5, 3); printf("★");
			SetCurrentCursorPos(15, 2); printf("★");// 1
			SetCurrentCursorPos(20, 1); printf("★");
			SetCurrentCursorPos(50, 2); printf("★");
			Sleep(500);
			SetCurrentCursorPos(15, 2); printf(" ");// 1
			SetCurrentCursorPos(10, 2); printf("★"); // 2
			SetCurrentCursorPos(5, 3); printf(" "); // 11
			SetCurrentCursorPos(6, 20); printf("★"); // 3
			SetCurrentCursorPos(40, 2); printf("★"); // 4
			SetCurrentCursorPos(100, 3); printf("★"); // 5
			SetCurrentCursorPos(110, 5); printf("★"); // 6
			SetCurrentCursorPos(80, 27); printf("★");
			SetCurrentCursorPos(30, 22); printf("★");
			Sleep(500);
			SetCurrentCursorPos(20, 1); printf(" ");
			SetCurrentCursorPos(95, 25); printf("★");
			SetCurrentCursorPos(20, 15); printf("★");
			SetCurrentCursorPos(50, 13); printf("★");
			SetCurrentCursorPos(10, 2); printf(" "); // 22
			SetCurrentCursorPos(7, 17); printf("★"); // 7
			SetCurrentCursorPos(6, 20); printf(" "); // 33
			SetCurrentCursorPos(40, 2); printf(" "); // 44
			SetCurrentCursorPos(90, 13); printf("★");
			Sleep(500);
			SetCurrentCursorPos(50, 2); printf(" ");
			SetCurrentCursorPos(10, 18); printf("★"); // 8
			SetCurrentCursorPos(7, 17); printf(" "); // 77d
			SetCurrentCursorPos(100, 3); printf(" "); // 55
			SetCurrentCursorPos(110, 5); printf(" "); // 66
			SetCurrentCursorPos(70, 14); printf("★");
			SetCurrentCursorPos(105, 13); printf(" ");
			SetCurrentCursorPos(80, 27); printf(" ");
			SetCurrentCursorPos(30, 22); printf(" ");
			Sleep(500);
			SetCurrentCursorPos(20, 15); printf(" ");
			SetCurrentCursorPos(95, 25); printf(" ");
			SetCurrentCursorPos(10, 18); printf(" "); // 88
			SetCurrentCursorPos(105, 13); printf("★"); //
			SetCurrentCursorPos(70, 14); printf(" ");
			SetCurrentCursorPos(110, 27); printf("★");
			SetCurrentCursorPos(115, 24); printf("★");
			Sleep(500);
			SetCurrentCursorPos(50, 13); printf(" ");
			SetCurrentCursorPos(105, 13); printf(" "); //
			SetCurrentCursorPos(90, 13); printf(" "); //
			SetCurrentCursorPos(110, 27); printf(" ");
			SetCurrentCursorPos(115, 24); printf(" ");
		}
	}

}