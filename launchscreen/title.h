#include<windows.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include <string.h>

#include<ctype.h>
#include<dos.h>
void SetCurrentCursorPos(int x, int y)    // Ŀ�� ��ġ �̵� �Լ�
{
	COORD pos = { x , y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);


}

COORD GetCurrentCursorPos()     // ���� Ŀ�� ��ġ�� ��� �Լ�
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
	int x = 5; //Ÿ��Ʋȭ���� ǥ�õǴ� x��ǥ 
	int y = 4; //Ÿ��Ʋȭ���� ǥ�õǴ� y��ǥ 

			   // ���� ����
			   // 0�� ������, 1�� �Ķ���, 2�� �ʷϻ�, 3�� ����, 4�� ������, 5�� ���ֻ�, 6�� �����, 7�� ���, 8�� ȸ��, 9�� ���� �Ķ���
			   // 10�� ���� �ʷϻ�, 11�� ���� ����, 12�� ���� ������, 13�� ���� ���ֻ�, 14�� ���� �����, 15�� ���� ȸ��


	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	SetCurrentCursorPos(x, y + 0); printf("��������������������������������������"); Sleep(150);
	SetCurrentCursorPos(x, y + 1); printf("��������������������������������������"); Sleep(150);
	SetCurrentCursorPos(x, y + 2); printf("��������������������������������������"); Sleep(150);
	SetCurrentCursorPos(x, y + 3); printf("��������������������������������������"); Sleep(150);
	SetCurrentCursorPos(x, y + 4); printf("��������������������������������������"); Sleep(150);
	SetCurrentCursorPos(x, y + 5); printf("��������������������������������������"); Sleep(150);
	SetCurrentCursorPos(x, y + 6); printf("��������������������������������������"); Sleep(150);
	SetCurrentCursorPos(x, y + 7); printf("��������������������������������������"); Sleep(150);
	SetCurrentCursorPos(x, y + 8); printf("��������������������������������������"); Sleep(150);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	SetCurrentCursorPos(x + 35, y + 11); printf("������������������������������������"); Sleep(100);
	SetCurrentCursorPos(x + 35, y + 12); printf("������������������������������������"); Sleep(100);
	SetCurrentCursorPos(x + 35, y + 13); printf("������������������������������������"); Sleep(100);
	SetCurrentCursorPos(x + 35, y + 14); printf("������������������������������������"); Sleep(100);
	SetCurrentCursorPos(x + 35, y + 15); printf("������������������������������������"); Sleep(100);
	SetCurrentCursorPos(x + 35, y + 16); printf("������������������������������������"); Sleep(100);
	SetCurrentCursorPos(x + 35, y + 17); printf("������������������������������������"); Sleep(100);
	SetCurrentCursorPos(x + 35, y + 18); printf("������������������������������������"); Sleep(100);
	SetCurrentCursorPos(x + 35, y + 19); printf("������������������������������������"); Sleep(100);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	SetCurrentCursorPos(x, y + 15); printf("Please Enter Any Key to Start.."); Sleep(100);
	SetCurrentCursorPos(x + 8, y + 17); printf("����ȣ BsoyOleg"); Sleep(100);


}

void twinkle()
{
	int cnt;
	for (cnt = 0;; cnt++) { //cnt�� 1�� ������Ű�鼭 ��� �ݺ� 	//�ϳ��� ���߿��� �� ��¦�̴� �ִϸ��̼� ȿ�� 
		if (_kbhit()) break; //Ű�Է��� ������ ���ѷ��� ���� 
		if (cnt % 50 == 0) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
			SetCurrentCursorPos(5, 3); printf("��");
			SetCurrentCursorPos(15, 2); printf("��");// 1
			SetCurrentCursorPos(20, 1); printf("��");
			SetCurrentCursorPos(50, 2); printf("��");
			Sleep(500);
			SetCurrentCursorPos(15, 2); printf(" ");// 1
			SetCurrentCursorPos(10, 2); printf("��"); // 2
			SetCurrentCursorPos(5, 3); printf(" "); // 11
			SetCurrentCursorPos(6, 20); printf("��"); // 3
			SetCurrentCursorPos(40, 2); printf("��"); // 4
			SetCurrentCursorPos(100, 3); printf("��"); // 5
			SetCurrentCursorPos(110, 5); printf("��"); // 6
			SetCurrentCursorPos(80, 27); printf("��");
			SetCurrentCursorPos(30, 22); printf("��");
			Sleep(500);
			SetCurrentCursorPos(20, 1); printf(" ");
			SetCurrentCursorPos(95, 25); printf("��");
			SetCurrentCursorPos(20, 15); printf("��");
			SetCurrentCursorPos(50, 13); printf("��");
			SetCurrentCursorPos(10, 2); printf(" "); // 22
			SetCurrentCursorPos(7, 17); printf("��"); // 7
			SetCurrentCursorPos(6, 20); printf(" "); // 33
			SetCurrentCursorPos(40, 2); printf(" "); // 44
			SetCurrentCursorPos(90, 13); printf("��");
			Sleep(500);
			SetCurrentCursorPos(50, 2); printf(" ");
			SetCurrentCursorPos(10, 18); printf("��"); // 8
			SetCurrentCursorPos(7, 17); printf(" "); // 77d
			SetCurrentCursorPos(100, 3); printf(" "); // 55
			SetCurrentCursorPos(110, 5); printf(" "); // 66
			SetCurrentCursorPos(70, 14); printf("��");
			SetCurrentCursorPos(105, 13); printf(" ");
			SetCurrentCursorPos(80, 27); printf(" ");
			SetCurrentCursorPos(30, 22); printf(" ");
			Sleep(500);
			SetCurrentCursorPos(20, 15); printf(" ");
			SetCurrentCursorPos(95, 25); printf(" ");
			SetCurrentCursorPos(10, 18); printf(" "); // 88
			SetCurrentCursorPos(105, 13); printf("��"); //
			SetCurrentCursorPos(70, 14); printf(" ");
			SetCurrentCursorPos(110, 27); printf("��");
			SetCurrentCursorPos(115, 24); printf("��");
			Sleep(500);
			SetCurrentCursorPos(50, 13); printf(" ");
			SetCurrentCursorPos(105, 13); printf(" "); //
			SetCurrentCursorPos(90, 13); printf(" "); //
			SetCurrentCursorPos(110, 27); printf(" ");
			SetCurrentCursorPos(115, 24); printf(" ");
		}
	}

}